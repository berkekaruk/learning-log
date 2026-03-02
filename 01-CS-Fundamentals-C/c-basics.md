# 🔎 C Introduction
### Taking notes of the C introduction.

---

### Source Code
- Human readable list of instructions for the computer
- Since computer only understands binary, a special piece of software named compiler is used to convert source code into so called machine code

### Terminal actions
- `code [fileName].c` creates a .c file
- `make [fileName]` complies the source- into machine code and creates a file named [fileName]
- `./[fileName]` runs the recent compiled program

### Escape Sequences
- Initiated by the escape charcter `\` telling the compiler that a special instruction follows, e.g.:
    - `\n` creates a new line
    - `\r`  returns to the start of a line
    - `\"`  prints a double quote
    - `\'`  prints a single quote
    - `\\`  prints a backslash

### Header Files
- Gives access to libraries and their certain functions
- Using the statement `#include <[libraryName].h>` the compiler knows what libaries are used
- libaries are basically a collection of pre-written code and functions that others have written and can utalized in our code
- An overview of common libraries can be found here: [CS50 Manual Pages](https://manual.cs50.io)