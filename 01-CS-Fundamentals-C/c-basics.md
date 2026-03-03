# 🔎 C Introduction

### Taking notes on C fundamentals, CLI usage, and control flow.

---

## Source Code vs. Machine Code

- **Source Code:** A human-readable list of instructions for the computer.
- **Machine Code:** Since computers only understand binary (0s and 1s), a special piece of software named a **compiler** is used to convert the source code into machine code that the CPU can execute.

## Linux CLI Commands (Cheat Sheet)

| Command             | Description                                                                                  |
| :------------------ | :------------------------------------------------------------------------------------------- |
| `code [fileName].c` | Creates or opens a `.c` file in the VS Code editor                                           |
| `make [fileName]`   | Compiles the source code into machine code and creates an executable file named `[fileName]` |
| `./[fileName]`      | Runs the recently compiled executable program in the current directory                       |
| `cd`                | Changes the current directory (folder)                                                       |
| `cp`                | Copies files and directories                                                                 |
| `ls`                | Lists all files and folders in the current directory                                         |
| `mkdir`             | Creates a new directory                                                                      |
| `mv`                | Moves or renames files and directories                                                       |
| `rm`                | Deletes files                                                                                |
| `rmdir`             | Deletes directories                                                                          |

## Escape Sequences

Initiated by the escape character `\`, which tells the compiler that a special instruction follows instead of regular text:

- `\n` : Creates a new line
- `\r` : Returns the cursor to the start of the current line
- `\"` : Prints a double quote (without closing the string)
- `\'` : Prints a single quote
- `\\` : Prints a physical backslash

## Header Files

- Give access to standard libraries and their specific functions.
- Using the statement `#include <[libraryName].h>`, the compiler knows which external libraries are being used.
- Libraries are basically collections of pre-written code and functions that others have written and can be utilized in our own code (e.g., `stdio.h` for `printf`).
- An overview of common C libraries used in this course can be found here: [CS50 Manual Pages](https://manual.cs50.io).

## Conditionals & Relational Operators

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

## Data Types and Format Codes

- Data types define what kind of data a variable can store and how much memory it uses
- Format codes tell functions like printf and scanf how to interpret and display a variable's data

  | Type     | Purpose                       | Example                      | Format Code |
  | :------- | :---------------------------- | :--------------------------- | :---------: |
  | bool     | true / false (0 or 1)         | `bool valid = true;`         |    `%i`     |
  | char     | single character              | `char grade = 'A';`          |    `%c`     |
  | int      | whole number                  | `int age = 25;`              |    `%i`     |
  | long     | large whole number            | `long population = 8000000;` |    `%li`    |
  | float    | decimal number (less precise) | `float price = 9.99;`        |    `%f`     |
  | double   | decimal number (more precise) | `double pi = 3.141592;`      |    `%f`     |
  | string\* | text (\*char array in C)      | `char[5] name = "Berke";`    |    `%s`     |

## Loops

- Loops allow repeated execution of code blocks based on a condition:
  - `while ([condition]) { [side effect] }`
    - Checks the condition before each iteration and executes the block only if the condition evaluates to true
    - If the condition is false initially, the block is never executed
    - Used when the number of iterations is not known in advance
  - `do { [side effect] } while ([condition]);`
    - Executes the block first and checks the condition afterward
    - Guarantees at least one execution regardless of the condition
    - Often used for input validation scenarios
  - `for ([initialization]; [condition]; [update]) { [side effect] }`
    - Combines loop variable initialization, condition check, and update in one structured statement
    - The initialization runs once before the loop starts
    - The condition is evaluated before each iteration
    - The update expression runs after each iteration
    - Commonly used when the number of iterations is known
    - Allows declaration of the loop variable directly inside the statement

## Functions

- Reusable blocks of code that perform a specific task to keep the main program clean and structured
- Since the compiler reads from top to bottom, the function itself or a prototype (e.g. `void [functionName] (void);`) must be declared in the lines before it is called
- Variables declared inside a function are local to that specific function (variable scope) and must be explicitly passed as arguments to be used elsewhere