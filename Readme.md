
# IDE integration
Visual Studio code is installed with the web development toolkit anyway. You can integrate the local compiler to be used with VS Code and with Eclipse. VS Code is simpler and lighter. It's suited better for small projects and quick tests where Eclipse provides more features and complexity.

## Visual Studio Code
1. Create an empty folder for a test project to start the setup with.
1. Start Git Bash in this folder and enter `code .` there to start VS Code in this folder. (Don't forget the period at the end of the command)
1. Open the extensions (bottom most icon in the left toolbar)
1. Install the `C/C++` Extension from Microsoft (`ms-vscode.cpptools`)

The following Steps need to be repeated in every new project. Or you can copy the according dot-files to new projects.

1. Create a new C file. (e.g. `test.c`) It can remain empty at this moment.
1. According to the [Manual](https://code.visualstudio.com/docs/cpp/config-mingw) you need the MinGW compiler. Cygwin works quiet similar. Continue by configuring the compiler path. Press `CTRL` + `Shift` + `P` and type `Edit config`. Select the (UI) version.
1. Set the **Compiler Path** to `C:/cygwin64/bin/gcc.exe`
1. Select `gcc-x64` for **IntelliSense mode**.
1. Add these two lines to the **Include path**: `C:\cygwin64\usr\include` and `C:\cygwin64\lib\gcc\x86_64-pc-cygwin\7.4.0\include`
1. Close this settings tab
1. Press `CTRL` + `Shift` + `P` again, type `build task` and select `Tasks: Configure default Build Task`
1. Select the only available option `C/C++: gcc.exe build active file`
1. Change the path in "command" to single forward slashes instead double backslashes.
1. Add these "args" in the following order: `"-g"` `"-O0"` `"-o"` `"${fileBasenameNoExtension}.exe"` `"${fileBasename}"` in JSON notation.
1. Remove the whole "cwd" line from the "options".
1. Save the file and close it
1. At this point you can start to compile files using the key combination `CTRL` + `Shift` + `B`
1. To use the debugger press `F5`. Then select `C++ (GDB/LLDB)`. In the next step select `gcc.exe build and debug active file`. The debugger tries to start but fails. The configuration file is created and opened.
1. Change "program" to `"${workspaceFolder}/${fileBasenameNoExtension}.exe"`
1. Change "stopAtEntry" and "externalConsole" to `true`.
1. Change the path in "miDebuggerPath" to single forward slashes instead double backslashes.
1. Save and close the config file
1. Now you can debug your C code with `F5`

##Code Runner extension (VS)
This steps are only necessary if there are more than one .c file to compile. If you have only one .c file, code-runner can compile it with default settings.

1. Install the extension code-runner
1. Open the settings.json file inside the .vscode folder
1. Replace the whole text with this:
`{
    "code-runner.executorMap": {
        "c": "cd $dir && gcc -o $fileNameWithoutExt.exe *.c && $fileNameWithoutExt.exe"
    }
}
`
1. Save and close the file
1. Now you can run your code within VS with F1 + run code (ctrl + alt + N)
1. The output will be shown in the output window