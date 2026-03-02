# ⏱️ Scratch and CS Introduction
### Taking notes of the CS and Scratch introduction.

---

## Computer Science Fundamentals

### Binary Digit (Bit)
- Computers count using a system named binary.
- Here, a single character (bit) has two possible states: `1` (on) or `0` (off), while only one state is possible at the same time.
- Computers use base-2 to count, which can be pictured as follows:

  | 2^7 | 2^6 | 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |

- Defining that each value is represented by its place in the binary system, it is possible to display any number between 0 to 255 using only 8 bits (1 byte):

  **:= 0**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |

  **:= 1**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |

  **:= 2**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 |

  **:= 3**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 1 |

  **:= 4**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 |

  **...**

  **:= 255**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |

### American Standard Code for Information Interchange (ASCII)
- A standard for representing numbers and letters by mapping specific letters to specific numbers.
- *Note:* A lowercase letter is the number of its uppercase counterpart **+32**. This allows the system to lowercase a letter by changing only one single bit (since 32 is a power of 2).
- For instance, writing `berke` requires 5 bytes (1 byte per character):

  **98 = `b`**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 1 | 1 | 0 | 0 | 0 | 1 | 0 |

  **101 = `e`**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 1 | 1 | 0 | 0 | 1 | 0 | 1 |

  **114 = `r`**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 1 | 1 | 1 | 0 | 0 | 1 | 0 |

  **107 = `k`**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 1 | 1 | 0 | 1 | 0 | 1 | 1 |

  **101 = `e`**
  | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
  | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
  | 0 | 1 | 1 | 0 | 0 | 1 | 0 | 1 |

### UNICODE
- Over time, ASCII didn't offer enough digits in binary to represent all the various characters that could be needed by humans.
- The UNICODE standard expanded the number of bits that can be transmitted and understood by computers, while also including special characters or emojis.
- While the patterns are standardized, each manufacturer may display each emoji slightly differently (e.g., Google, Apple).

### RGB
- Red, Green, and Blue are a combination of three numbers used to represent color.
- While images are collections of RGB pixels, 1 pixel consists of 3 bytes (1 for each R, G, and B) to define the final color composition.

### Algorithms
- An algorithm is a step-by-step set of instructions to solve a problem.
- There are multiple approaches for the same problem that could be called algorithms. 
- The speed of each of these algorithms can be pictured using the Big-O notation (e.g., $O(n)$, $O(n/2)$, $O(\log n)$) depending on the time to solve it in relation to its size.

---

## Scratch Content & Computational Logic

Scratch is used to visualize core programming concepts without syntax.

### Control Flow & Functions
Tracking the flow of data through functions (`ask`, `join`, `say`):

1. **Prompting the user:**
   * **Input:** name
   * **Algorithm:** `ask and wait`
   * **Output:** `answer` variable (Return Value)

2. **Processing the data:**
   * **Input:** "hello, " + `answer`
   * **Algorithm:** `join`
   * **Output:** "hello, [name]"

3. **Executing the result:**
   * **Input:** "hello, [name]"
   * **Algorithm:** `say`
   * **Output:** Side effect (the text is physically printed/spoken on screen)

### Advanced Concepts
- **Loops:** Using blocks like `repeat` to execute code continuously until a given condition is met.
- **Abstraction:** Defining a custom function (custom block) and calling it later in the main program.
- **Parameters:** Handing over specific arguments to those custom functions so they can operate dynamically.