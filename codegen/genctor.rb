require_relative 'common'

def emit_function(io, type)
  props = type.props.map do |prop|
    proptype = prop.type.to_s
    propname = prop.capname
    if propname == type.name
      propname = "#{propname}_"
    end
    [check_csharp_keyword(proptype), check_csharp_keyword(propname)]
  end

  arglist = props.map do |type, name|
    argname = check_csharp_keyword name.sub(/[A-Z]/, &:downcase)
    "#{type} #{argname} = default"
  end

  csname = check_csharp_keyword type.name

  io.puts "public partial class #{csname}"
  io.puts "{"
  io.block do
    if type.comment && !type.comment.empty?
      io.puts "/// <summary>"
      io.puts "/// " + type.comment.encode(xml: :text)
      io.puts "/// </summary>"
    end
    io.puts "public #{csname}() { }"
    unless props.empty?
      if type.comment && !type.comment.empty?
        io.puts "/// <summary>"
        io.puts "/// " + type.comment.encode(xml: :text)
        io.puts "/// </summary>"
      end
      type.props.each do |prop|
        unless prop.comment.empty?
          argname = check_csharp_keyword prop.capname.sub(/[A-Z]/, &:downcase)
          io.puts "/// <param name=#{argname.to_s.encode(xml: :attr)}>" + prop.comment.encode(xml: :text) + "</param>"
        end
      end
      io.puts "public #{csname}(#{arglist.join(", ")})"
      io.puts "{"
      io.block do
        props.each do |type, name|
          argname = check_csharp_keyword name.sub(/[A-Z]/, &:downcase)
          io.puts "this.#{name} = #{argname};"
        end
      end
      io.puts "}"
    end
  end
  io.puts "}"

  io.puts ""
end

def emit(out=STDOUT)
  io = IndentedOutput.new(out)
  io.puts "// Generated by codegen/genctor.rb"
  io.puts "using System;"
  io.puts "using System.Threading.Tasks;"
  io.puts "using TDLibCore;"
  io.puts ""
  io.puts "namespace TDLibCore.Api"
  io.puts "{"
  io.push

  TDLibTLTypeInfo::Types.each_value do |type|
    emit_function(io, type)
  end
  TDLibTLTypeInfo::Functions.each_value do |type|
    emit_function(io, type)
  end
  io.pop
  io.puts "}"
end

TDLibTLTypeInfo.load ARGV[0]
emit File.open(ARGV[1], 'wb')
