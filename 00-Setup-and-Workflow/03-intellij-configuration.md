# 🖥 IntelliJ Environment
### Documentation of the development environment and tooling versions.

---

## Core Technology
* **Language:** Java 21 (LTS) - Utilizing modern language features.
* **Version Control:** Git (via SSH) - Secure, key-based repository access.
* **Markdown:** Documentation standard for this repository.

---

## IDE & OS Configuration
* **IDE:** IntelliJ IDEA Ultimate
    * **Configuration:** Optimized for "Headless" workflow (keyboard-centric).
    * **Code Style:** [Google Java Style Guide](https://google.github.io/styleguide/javaguide.html) (Imported XML schema).
* **Operating System:** macOS
* **Terminal:** Zsh (Z Shell) - Unix-based command line interface.

---

## Future Dependencies
* **Build System:** Maven - For dependency management.
* **Testing:** JUnit 5 - For unit testing and test-driven development (TDD).

---

## Essential Shortcuts (macOS)
The following keybindings are central to the development workflow, eliminating the need for mouse interaction.

### Git Operations
| Action | Shortcut | Description |
| :--- | :--- | :--- |
| **Commit** | `Cmd + K` | Opens the Commit tool window to review changes and stage files. |
| **Push** | `Cmd + Shift + K` | Pushes committed changes to the remote repository. |
| **Update** | `Cmd + T` | Pulls changes from the remote and merges them into the local branch. |

### Code Editing
| Action | Shortcut | Description |
| :--- | :--- | :--- |
| **Reformat Code** | `Cmd + Opt + L` | Standardizes code formatting according to the project style guide. |
| **Search Everywhere** | `Shift + Shift` | Instantly finds files, classes, or settings. |
| **Show Intentions** | `Opt + Enter` | Quick-fixes for errors or suggestions for code improvements. |