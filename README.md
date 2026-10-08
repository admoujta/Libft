*This project has been created as part of the 42 curriculum by admoujta.*

# Libft — Part 1

## Description

Libft is my first C library developed as part of the 42 curriculum.

The goal of Part 1 is to reimplement a set of standard C library functions in order to understand how they work internally. Each function keeps the expected behavior of its libc equivalent while using the `ft_` prefix.

This part focuses on:
- Character classification
- Character conversion
- String manipulation
- Memory manipulation
- String-to-integer conversion
- Dynamic memory allocation

The library is compiled into:

```bash
libft.a
```

## Implemented Functions

### Character classification

- `ft_isalpha` — checks whether a character is alphabetic.
- `ft_isdigit` — checks whether a character is a decimal digit.
- `ft_isalnum` — checks whether a character is alphabetic or numeric.
- `ft_isascii` — checks whether a value belongs to the ASCII range.
- `ft_isprint` — checks whether a character is printable.

### Character conversion

- `ft_toupper` — converts a lowercase letter to uppercase.
- `ft_tolower` — converts an uppercase letter to lowercase.

### String functions

- `ft_strlen` — returns the length of a string.
- `ft_strchr` — locates the first occurrence of a character in a string.
- `ft_strrchr` — locates the last occurrence of a character in a string.
- `ft_strncmp` — compares two strings up to `n` characters.
- `ft_strlcpy` — copies a string into a destination buffer with a size limit.
- `ft_strlcat` — appends a string to another string with a size limit.
- `ft_strnstr` — searches for a substring within a limited number of characters.
- `ft_strdup` — allocates and returns a duplicate of a string.

### Memory functions

- `ft_memset` — fills `n` bytes of memory with a given byte value.
- `ft_bzero` — sets `n` bytes of memory to zero.
- `ft_memcpy` — copies `n` bytes from a source memory area to a destination.
- `ft_memmove` — copies `n` bytes safely, including when source and destination overlap.
- `ft_memchr` — searches for the first occurrence of a byte in a memory area.
- `ft_memcmp` — compares the first `n` bytes of two memory areas.

### Conversion and allocation

- `ft_atoi` — converts the beginning of a string to an integer.
- `ft_calloc` — allocates memory and initializes all allocated bytes to zero.

## Instructions

### Compilation

Compile the library with:

```bash
make
```

This creates:

```bash
libft.a
```

Available Makefile rules:

```bash
make
make clean
make fclean
make re
```

- `make` / `make all` — builds `libft.a`.
- `make clean` — removes object files.
- `make fclean` — removes object files and `libft.a`.
- `make re` — rebuilds the library from scratch.

### Usage

Include the header:

```c
#include "libft.h"
```

Compile a test program with the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o test
```

Then run:

```bash
./test
```

## Project Structure

```text
libft/
├── Makefile
├── README.md
├── libft.h
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_strlen.c
├── ft_memset.c
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_toupper.c
├── ft_tolower.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_strnstr.c
├── ft_atoi.c
├── ft_calloc.c
└── ft_strdup.c
```

## Testing

Run:

```bash
norminette
make fclean
make
```

To inspect exported functions:

```bash
nm libft.a | grep " T ft_"
```

## Resources

Resources used during Part 1:

- Official Libft subject
- Linux manual pages (`man`)
- Standard C library documentation
- Peer discussions and personal test programs
- 
The functions were implemented and reviewed with the goal of understanding the underlying C concepts rather than copying solutions.
