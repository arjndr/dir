# Dir

Cross-platform C++ header to create directories, it is a wrapper around Windows' `_mkdir` and UNIX's `mkdir` commands, I'm still learning C++ so use it on your own risk lol

### Usage

1. Download `dir.h` file
2. Add it to your project
3. Include it with `#include`
4. Use it
    ```c++
    // Second argument doesn't do anything on Windows
    Dir::make("my_directory", 0775);
    ```

or see [example.cc](/example.cc)

### API

The Dir namespace only exposes one function, i.e: `make()`

- `make(path, mode)`
  - path: `string` - Name of the directory to create (including the path)
  - mode: `int` - Permissions of the directory (default: `0775`)
  
  Returns `0` if successful, read more about return values and error codes for [Windows](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/mkdir-wmkdir?view=vs-2019), [Linux](https://linux.die.net/man/3/mkdir) or [macOS](https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man2/mkdir.2.html).

#### MIT &copy; 2020
