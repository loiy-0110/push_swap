*This project has been created as part of the 42 curriculum by labusheh.*


## Description
**Libft** is the foundational first project at 42 school. The core goal of this project is to recode a set of standard C library functions, along with additional utility functions and linked list manipulations, and compile them into a single static library (`libft.a`). This library serves as a reusable, robust toolset for all upcoming C projects throughout the 42 curriculum, helping students master memory management, pointer manipulation, low-level data structures, and rigorous coding standards.

---

## Detailed Description of the Library
The library is structured into three main categories of custom C functions:

### 1. Libc Functions (Part 1)
Reimplementations of standard C library functions, prefixed with `ft_`, operating identically to their original C library counterparts:
- **Character Classification & Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Memory Operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **String Manipulation & Search:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`
- **Numeric Conversion:** `ft_atoi`

### 2. Additional Functions (Part 2)
Non-standard helper functions designed to simplify advanced string manipulation, parsing, and data output:
- **String Manipulation & Creation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked List Functions (Part 3)
Functions dedicated to creating and managing singly linked lists for dynamic data structures:
- `ft_lstnew`: Allocates and returns a new node.
- `ft_lstadd_front`: Adds a new node at the beginning of a list.
- `ft_lstsize`: Counts the number of nodes in a list.
- `ft_lstlast`: Returns the last node of a list.
- `ft_lstadd_back`: Adds a new node at the end of a list.
- `ft_lstdelone`: Frees a node's memory.
- `ft_lstclear`: Deletes and frees all consecutive nodes.
- `ft_lstiter`: Iterates through a list and applies a function.
- `ft_lstmap`: Iterates through a list and applies a function to create a new list.

---

## Instructions

### Compilation
To compile the static library (`libft.a`), run the Makefile from the root directory of the project. Since all parts are bundled together, use the following rules:
- `make` — Compiles all library functions (Parts 1, 2, and 3) and creates `libft.a`.
- `make clean` — Removes all object (`.o`) files generated during compilation.
- `make fclean` — Removes all object files and deletes the final static library (`libft.a`).
- `make re` — Performs a full clean (`fclean`) and rebuilds the entire project from scratch.

### Usage
To use `libft` in your own C programs, include its header file in your source code:
```c
#include "libft.h"
```
And compile your program by linking the static library:
```bash
gcc main.c -L. -lft
```

---

## Resources & AI Usage

### References
- C Standard Library documentation and official `man` pages (`man malloc`, `man memset`, `man memcpy`, etc.).
- 42 curriculum guidelines, normative standards, and Norminette documentation.

### AI Usage Disclosure
In strict accordance with 42 transparency guidelines, an AI collaborator was utilized during the development process for:
- **Conceptual Guidance:** Clarifying complex pointer arithmetic, memory safety mechanics, and edge cases in memory-shifting functions like `ft_memmove` and tokenization logic in `ft_split`.
- **Makefile Optimization:** Structuring a robust, clean Makefile utilizing pattern rules to guarantee efficient compilation under `-Wall -Wextra -Werror` without requiring a separate bonus rule.
- **Code Review & Debugging:** Identifying compilation warnings (such as `const` qualifiers and unsequenced modifications) and verifying standard-compliant syntax.