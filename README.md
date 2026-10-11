*This project has been created as part of the 42 curriculum by admoujta.*

<div align="center">

# 📚 LIBFT

### Your first own C library at 42

![Language](https://img.shields.io/badge/Language-C-blue)
![School](https://img.shields.io/badge/School-42-black)
![Status](https://img.shields.io/badge/Status-Completed-success)
![Norm](https://img.shields.io/badge/Norminette-42-blueviolet)

</div>

---

## 📌 Description

**Libft** is one of the first projects of the **42 curriculum**.

The goal is to build a personal C library by reimplementing several functions from the standard C library, creating additional utility functions, and working with linked lists.

This project develops a strong understanding of:

- Memory management
- Pointers and pointer arithmetic
- Strings and arrays
- Dynamic memory allocation
- File descriptors
- Linked lists
- Structures and function pointers
- Static libraries
- Makefiles
- Error handling
- Core C programming concepts

The final result is a reusable static library named:

```text
libft.a
```

It can be reused in future 42 projects.

---

## ✅ Progress

```text
Part 1   ████████████████████ 100%
Part 2   ████████████████████ 100%
Part 3   ████████████████████ 100%
```

> ✅ Part 1 completed  
> ✅ Part 2 completed  
> ✅ Part 3 — Linked Lists completed  
> 🎉 Libft completed

---

## 🧩 Functions

### Part 1 — Libc Functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character belongs to ASCII |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Calculates the length of a string |
| `ft_memset` | Fills memory with a byte |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory |
| `ft_memmove` | Copies memory safely when regions overlap |
| `ft_strlcpy` | Copies a string with a size limit |
| `ft_strlcat` | Concatenates strings with a size limit |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Finds the first occurrence of a character |
| `ft_strrchr` | Finds the last occurrence of a character |
| `ft_strncmp` | Compares two strings up to `n` characters |
| `ft_memchr` | Searches memory for a byte |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Finds a substring within a limited length |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string |

### Part 2 — Additional Functions

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring |
| `ft_strjoin` | Joins two strings |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string using a delimiter |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to every character of a string |
| `ft_striteri` | Applies a function to characters using their index |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Part 3 — Linked Lists

Part 3 introduces linked lists using the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
} t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Counts the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Deletes one node using a deletion function |
| `ft_lstclear` | Deletes and frees an entire list |
| `ft_lstiter` | Applies a function to every node |
| `ft_lstmap` | Creates a new list by applying a function to each node |

---

## ⚙️ Instructions

### Clone the repository

```bash
git clone https://github.com/admoujta/Libft.git
cd Libft
```

### Compile the library

```bash
make
```

This creates:

```text
libft.a
```

### Available Makefile rules

| Command | Action |
|---|---|
| `make` | Builds `libft.a` |
| `make all` | Builds `libft.a` |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Rebuilds the library from scratch |

---

## 🚀 Usage

Include the header in your C source file:

```c
#include "libft.h"
```

Compile your program with Libft:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

Then run:

```bash
./program
```

You can also link the library from another directory:

```bash
cc main.c -Llibft -lft -Ilibft -o program
```

---

## 📂 Project Structure

```text
Libft/
├── Makefile
├── README.md
├── libft.h
├── ft_*.c
└── libft.a        # generated after compilation
```

Each function is implemented in its own `.c` file and its prototype is declared in `libft.h`.

---

## 🔍 Testing

The project can be checked with:

```bash
norminette
make fclean
make
```

Compilation uses the required flags:

```text
-Wall -Wextra -Werror
```

Important edge cases tested during development include:

- Empty strings
- Zero-length operations
- `\0` characters
- Negative numbers
- `INT_MIN` and `INT_MAX`
- Overlapping memory regions
- Allocation failures and overflow-related cases where applicable
- Empty linked lists
- Single-node linked lists
- Multi-node linked lists
- Correct cleanup and memory handling

To inspect the exported functions in the static library:

```bash
nm libft.a | grep " T ft_"
```

---

## 🧠 What I Learned

### Memory

Working with dynamic allocation and low-level memory manipulation using concepts related to:

```text
malloc
free
calloc
```

### Pointers

Understanding pointer types and pointer arithmetic, including:

```text
char *
void *
unsigned char *
```

### Strings

Understanding how null-terminated strings work internally and how common libc functions manipulate them.

### Linked Lists

Understanding how linked data structures work in memory and how to:

- Create nodes
- Traverse a list
- Add nodes at the front or back
- Find the last node
- Count nodes
- Delete individual nodes
- Clear an entire list safely
- Apply functions to list contents
- Build a new list from an existing one

### Compilation

Understanding the compilation process:

```text
.c
 ↓
.o
 ↓
libft.a
```

### Makefiles

Learning to automate compilation, cleanup and rebuilding through Makefile rules.

---

## 📖 Resources

Resources used during the development of Libft:

- Official 42 Libft subject
- Linux / Unix manual pages (`man`)
- FreeBSD manual pages
- GNU C Library documentation
- Standard C documentation
- Peer discussions
- Personal test programs

Useful manual commands include:

```bash
man strlen
man memset
man memcpy
man memmove
man strchr
man malloc
```

FreeBSD manual pages:  
https://man.freebsd.org/

GNU C Library documentation:  
https://www.gnu.org/software/libc/manual/

---

## 🤖 AI Usage

AI tools were used as a **learning and debugging assistant** during the development of this project.

AI was used to:

- Explain C programming concepts
- Clarify pointers and pointer arithmetic
- Explain `void *` and `unsigned char *`
- Explain memory-management concepts
- Explain linked-list concepts
- Interpret manual pages and function behavior
- Identify important edge cases
- Help understand compiler and linker errors
- Explain Makefile behavior
- Help reason through Git and merge-conflict issues
- Review debugging approaches
- Help organize and improve this README

AI was primarily used for **explanations, hints, conceptual guidance and debugging support**.

The project functions were implemented and understood by the author. AI was not used as a replacement for understanding the project or blindly copying solutions.

---

<div align="center">

## 👨‍💻 Author

<img src="https://raw.githubusercontent.com/admoujta/admoujta/main/assets/profile.jpg" width="170" alt="admoujta profile photo" />

### [admoujta](https://github.com/admoujta)

42 Student

### ⭐ Libft — 42 Curriculum

`C • Memory • Pointers • Strings • Linked Lists • Makefile • Static Library`

**Project completed ✅**

</div>
