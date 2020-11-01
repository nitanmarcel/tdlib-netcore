# TDLib

Fast [TDLib](https://github.com/tdlib/td) binding for .NET Core:
  * Generated APIs with full documentation.
  * Generated `System.Text.Json`-based reader and writer for performance.
  * Plus *experimental* SWIG-like binding that directly consumes TDLib C++ API for more performance (~40% faster than JSON binding on calling getTextEntities in example below).


## Installation

There is no official NuGet packages at the moment. You can build your own package with build script, or use packages from CI.

```bash
# build managed (.NET) packages.
ruby build-managed.rb
# build native package
ruby build-native.rb -- [tdlib CMake options]
```

This will build package in `pkgs` subdirectory by default.

> 💡 **vcpkg users:** use `-DVCPKG_APPLOCAL_DEPS=ON/OFF` to control including OpenSSL and zlib libraries in package.

<details><summary>Build script options</summary>

```
usage: build-managed.rb [options] -- [tdlib CMake options]
    -b, --build-root=DIR             set build root to DIR, defaults to /thisrepo/build
    -o, --output=DIR                 set output directory to DIR, defaults to /thisrepo/pkgs
    -r, --use-release-versioning     remove commit hash from package version
    -h, --help                       Show this message
```

```
usage build-native.rb [options] -- [tdlib CMake options]
    -b, --build-root=DIR             set build root to DIR, defaults to /thisrepo/build
    -s, --source-root=DIR            set tdlib source root to DIR, defaults to /thisrepo/td
    -o, --output=DIR                 set output directory to DIR, defaults to /thisrepo/pkgs
    -r, --use-release-versioning     remove commit hash from package version
        --rid=RID                    override RID detection
    -h, --help                       Show this message
```

</details>

### Packages Description

* **TDLib**: provides TDLib APIs.
* **TDLib.JsonClient**: provides TDLib tdjson binding.
* **TDLib.NativeClient**: provides native TDLib binding, which means data is passed to TDLib with its native representation.
* **TDLib.{Json,Native}Client.Native**: helper package to reference correct runtime package on publish.
* **runtime.{RID}.TDLib.{Json,Native}Client.Native**: provides native library for runtime RID.
* **TDLib.ApiVersionTag**: dummy package to enforce native package is used with correct version of binging package.

Binding packages don't depend on native package. Feel free to bring your own native library.


## Usage

Add reference to `TDLib.JsonClient` or `TDLib.NativeClient`, additionally with corresponding native package.

> 💡 You need a runtime package to make native libraries copied to build output (for debugging).

```c#
using System;
using TDLib.Api;
using TDLib.JsonClient;  // or NativeClient

using var client = new JsonClient();  // or NativeClient
var text = "/ban_shanye@lgjjbot #山野 @shanye https://github.com/ShanYe/ shanye@shanye.com \n\r\t少发点山野对大家都好";
var request = new GetTextEntities(text);
var response = client.Execute(request);
Console.WriteLine($"Found {response.Entities.Length} entities");

// using extension methods
using TDLib.ClientExtension;
response = client.GetTextEntitiesSync(text);
Console.WriteLine($"Found {response.Entities.Length} entities");

// using async APIs
client.Update += (client, update) => { Console.WriteLine($"Received update of type {update.GetType()}") }
client.RunEventLoop();
response = await client.GetTextEntities(text);
Console.WriteLine($"Found {response.Entities.Length} entities");

// error handling
try
{
    // Ok mapped to void
    await client.SetAuthenticationPhoneNumber(phoneNumber);
}
catch (TDLibError e)
{
    TDLib.Api.Error err = e.Error;
    Console.WriteLine($"{err.Code} {err.Message}")
}

// stop event loop to stop receiving updates
//  ... and cancel pending async calls
await client.StopEventLoop();
```

## Targeting Different TDLib Version

The current targeting TDLib version/revision is included as submodule for reference.
You can generate code for a different version:

```bash
cd codegen
make  # using td submodule by default, override with TD_DIR=/path/to/tdlib
      # and run build-native.rb with --source-root=/path/to/tdlib
# or with MSVC NMake
nmake # additionally with TD_DIR=C:\path\to\tdlib
```

## Benchmarks

    BenchmarkDotNet=v0.12.1, OS=Windows 10.0.19042
    Intel Core i5-8300H CPU 2.30GHz (Coffee Lake), 1 CPU, 8 logical and 4 physical cores
    .NET Core SDK=5.0.100-rc.1.20452.10
      [Host]     : .NET Core 3.1.9 (CoreCLR 4.700.20.47201, CoreFX 4.700.20.47203), X64 RyuJIT
      DefaultJob : .NET Core 3.1.9 (CoreCLR 4.700.20.47201, CoreFX 4.700.20.47203), X64 RyuJIT


|                 Method |      Mean |     Error |    StdDev | Ratio | RatioSD |
|----------------------- |----------:|----------:|----------:|------:|--------:|
| td_json_client_execute |  6.579 us | 0.1211 us | 0.1737 us |  1.00 |    0.00 |
|      JsonClientExecute |  8.303 us | 0.0464 us | 0.0619 us |  1.26 |    0.04 |
|    NativeClientExecute |  5.814 us | 0.0454 us | 0.0651 us |  0.88 |    0.02 |
|     JsonDotNetExecute* | 68.461 us | 0.5660 us | 0.5294 us | 10.37 |    0.36 |
\*: using Newtonsoft.Json reflection-based converter.