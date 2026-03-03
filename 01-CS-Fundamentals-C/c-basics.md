# 🔎 C Introduction

### Taking notes on C fundamentals, CLI usage, and control flow.

---

## 1. Source Code vs. Machine Code

- **Source Code:** A human-readable list of instructions for the computer.
- **Machine Code:** Since computers only understand binary (0s and 1s), a special piece of software named a **compiler** is used to convert the source code into machine code that the CPU can execute.

## 2. Linux CLI Commands (Cheat Sheet)

| Command             | Description                                                                                   |
| :------------------ | :-------------------------------------------------------------------------------------------- |
| `code [fileName].c` | Creates or opens a `.c` file in the VS Code editor.                                           |
| `make [fileName]`   | Compiles the source code into machine code and creates an executable file named `[fileName]`. |
| `./[fileName]`      | Runs the recently compiled executable program in the current directory.                       |
| `cd`                | Changes the current directory (folder).                                                       |
| `cp`                | Copies files and directories.                                                                 |
| `ls`                | Lists all files and folders in the current directory.                                         |
| `mkdir`             | Creates a new directory.                                                                      |
| `mv`                | Moves or renames files and directories.                                                       |
| `rm`                | Deletes files.                                                                                |
| `rmdir`             | Deletes directories.                                                                          |

## 3. Escape Sequences

Initiated by the escape character `\`, which tells the compiler that a special instruction follows instead of regular text:

- `\n` : Creates a new line
- `\r` : Returns the cursor to the start of the current line
- `\"` : Prints a double quote (without closing the string)
- `\'` : Prints a single quote
- `\\` : Prints a physical backslash

## 4. Header Files

- Give access to standard libraries and their specific functions.
- Using the statement `#include <[libraryName].h>`, the compiler knows which external libraries are being used.
- Libraries are basically collections of pre-written code and functions that others have written and can be utilized in our own code (e.g., `stdio.h` for `printf`).
- An overview of common C libraries used in this course can be found here: [CS50 Manual Pages](https://manual.cs50.io).

## 5. Conditionals & Relational Operators

- Control flow is based on boolean logic (true/false):
  - `if ([condition]) { [side effect] }` checks a condition and if the condition is true, the program enters the block and executes the statements (side effect)
  - `else if ([condition]) { [side effect] }` checks a new condition, but only if the prior `if` condition was false and if this new condition is true, its side effect is executed
  - `else { [side effect] }` enters the side effect automatically if all prior conditions evaluated to false
- To evaluate these conditions relational operators are used to compare one or more values against each other:
  | Operator | Meaning |
  | :---: | :--- |
  | `<` | less than |
  | `>` | greater than |
  | `<=` | less than or equal to |
  | `>=` | greater than or equal to |
  | `==` | equal to |
  | `!=` | not equal to |
