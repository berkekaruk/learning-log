# 🖥 Visual Studio Code Environment
### Documentation of the lightweight editing environment and C toolchain.

---

## Core Technology
* **Language:** C17 (Standard) - System-level memory management.
* **Compiler:** Clang (LLVM) - Native macOS compiler via Xcode Command Line Tools.
* **Version Control:** Git (via SSH) - Shared repository access.

---

## Editor & OS Configuration
* **Editor:** Visual Studio Code
    * **Configuration:** Workspace-isolated settings (via `.vscode` folder).
    * **Code Style:** [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html) (via Clang-Format).
* **Operating System:** macOS
* **Terminal:** Integrated Zsh - For manual compilation (`make`, `gcc`).

---

## Essential Extensions
* **C/C++ (Microsoft):** IntelliSense, debugging, and code browsing.
* **Code Runner:** Instant code execution for snippets.
* **GitLens:** Visualizes code authorship and history line-by-line.

---

## Essential Shortcuts (macOS)
Keybindings configured for a high-speed, keyboard-centric workflow in VS Code.

### Git & Terminal Operations
| Action | Shortcut | Description |
| :--- | :--- | :--- |
| **Source Control** | `Ctrl + Shift + G` | Opens the Source Control sidebar (Git). |
| **Commit** | `Cmd + Enter` | Commits staged changes (when in the message box). |
| **Toggle Terminal** | `Ctrl + \`` | Opens or hides the integrated terminal for compilation. |

### Code Editing
| Action | Shortcut | Description |
| :--- | :--- | :--- |
| **Reformat Code** | `Shift + Opt + F` | Formats the file according to Clang-Format rules. |
| **Command Palette** | `Cmd + Shift + P` | The "Search Everywhere" equivalent for VS Code commands. |
| **Quick Fix** | `Cmd + .` | Shows suggestions/fixes for errors (IntelliJ's `Opt + Enter`). |