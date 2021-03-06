using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Scripting;
using Microsoft.CodeAnalysis.CSharp.Scripting.Hosting;
using Microsoft.CodeAnalysis.Scripting;
using Microsoft.CodeAnalysis.Scripting.Hosting;
using Microsoft.CodeAnalysis.Text;
using System;
using System.Collections.Immutable;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace example
{
    class ScriptEvaluator
    {

        private readonly CSharpParseOptions parseOptions;
        private ScriptOptions scriptOptions;
        private readonly CSharpObjectFormatter objectFormatter;
        private readonly PrintOptions printOptions;

        private ScriptState state;
        private object savedGlobals;

        public ScriptEvaluator()
        {
            objectFormatter = CSharpObjectFormatter.Instance;
            printOptions = new PrintOptions { MaximumOutputLength = 114514, EscapeNonPrintableCharacters = true };
            parseOptions = new CSharpParseOptions(kind: SourceCodeKind.Script, languageVersion: LanguageVersion.Latest);
        }

        /// <summary>
        /// Initializes or resets the scripting context.
        /// </summary>
        /// <param name="globals"></param>
        /// <returns></returns>
        public async Task Initialize(object globals)
        {
            if (savedGlobals == null) savedGlobals = globals;
            scriptOptions = ScriptOptions.Default
                .WithReferences(AppDomain.CurrentDomain.GetAssemblies().Where(asm => !asm.IsDynamic && !string.IsNullOrEmpty(asm.Location)))
                .WithImports("System", "System.Text", "System.Collections.Generic", "System.Linq", "System.Threading.Tasks",
                "TDLibCore", "TDLibCore.Api", "TDLibCore.ClientExtensions");
            state = await CSharpScript.RunAsync(";", scriptOptions, globals: globals);
            scriptOptions = UpdateOptions(scriptOptions);
        }

        public async Task Reset()
        {
            await Initialize(savedGlobals);
        }

        public string FormatObject(object o) => objectFormatter.FormatObject(o, printOptions);

        public string FormatException(Exception e)
        {
            if (e is CompilationErrorException)
            {
                return e.Message;
            }
            if (e is FileLoadException && e.InnerException != null)
            {
                return e.InnerException.Message;
            }
            else
            {
                return objectFormatter.FormatException(e);
            }
        }

        private bool IsCompleteSubmission(string input)
        {
            var tree = SyntaxFactory.ParseSyntaxTree(SourceText.From(input.ToString()), parseOptions);
            return SyntaxFactory.IsCompleteSubmission(tree);
        }

        public async Task<(object value, Exception e)> Evaluate(string script)
        {
            try
            {
                state = await state.ContinueWithAsync(script);
                return (state.ReturnValue, null);
            }
            catch (Exception e)
            {
                return (null, e);
            }
        }

        private string ReadLine(string prompt = "")
        {
            if (!string.IsNullOrEmpty(prompt))
            {
                Console.Write(prompt);
            }
            return Console.ReadLine();
        }

        public async Task StartInteractive()
        {
            var stopping = false;
            bool cancelSubmission = false;
            string prompt = "> ";
            //ReadLine.HistoryEnabled = true;
            while (!stopping)
            {
                var input = new StringBuilder();
                string line;
                while (true)
                {
                    line = ReadLine(prompt);
                    if (line == null)
                    {
                        if (input.Length == 0) return;
                        cancelSubmission = true;
                        break;
                    }
                    input.AppendLine(line);
                    if (IsCompleteSubmission(input.ToString())) break;
                    prompt = ". ";
                }
                prompt = "> ";
                if (cancelSubmission) continue;

                var script = input.ToString();
                script = script.Trim();
                if (script == "") continue;
                if (script == "#exit") break;
                if (script == "#reset")
                {
                    await Reset();
                    continue;
                }
                var newscript = state.Script.ContinueWith(script, scriptOptions);
                var diag = newscript.Compile();
                DisplayDiagnostics(diag);
                if (diag.Any(d => d.Severity == DiagnosticSeverity.Error)) continue;

                state = await newscript.RunFromAsync(state, catchException: e => true);
                if (state.Exception != null)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.Error.WriteLine(FormatException(state.Exception));
                    Console.ResetColor();
                }
                if (state.ReturnValue != null)
                {
                    Console.WriteLine(FormatObject(state.ReturnValue));
                }

                scriptOptions = UpdateOptions(scriptOptions);
            }
        }

        private static ScriptOptions UpdateOptions(ScriptOptions options)
        {
            var currentMetadataResolver = options.MetadataResolver;
            var currentSourceResolver = options.SourceResolver;


            // remove references and imports from the options, they have been applied and will be inherited from now on:
            return options.
                WithReferences(Array.Empty<MetadataReference>()).WithImports(Array.Empty<string>()).
                WithMetadataResolver(currentMetadataResolver).
                WithSourceResolver(currentSourceResolver);
        }

        private void DisplayDiagnostics(ImmutableArray<Diagnostic> diagnostics)
        {
            const int MaxDisplayCount = 5;

            try
            {
                foreach (var diagnostic in diagnostics.Take(MaxDisplayCount))
                {
                    Console.ForegroundColor = diagnostic.Severity == DiagnosticSeverity.Error ? ConsoleColor.Red : ConsoleColor.Yellow;
                    Console.Error.WriteLine(diagnostic.ToString());
                }

                if (diagnostics.Length > MaxDisplayCount)
                {
                    int notShown = diagnostics.Length - MaxDisplayCount;
                    Console.ForegroundColor = ConsoleColor.DarkRed;
                    Console.Error.WriteLine("{0} not shown", notShown);
                }
            }
            finally
            {
                Console.ResetColor();
            }
        }

    }
}
