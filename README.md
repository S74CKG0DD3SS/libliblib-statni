*This project has been created as part of the 42 curriculum by roel-oua.*

# Libft

## Description

This is my first project at 1337.The goal is to recreate some functions from the standard C library and build my own library in C.
I worked on functions related to strings, memory manipulation, character checks, and conversions. I also implemented additional functions and linked list operations.
The main idea behind this project is to understand how things work under the hood instead of just using ready-made functions.

### Library description

`libft.a` is a static library written in C. It is split into three parts.

**Part 1 – Reimplementation of libc functions**
Functions that behave like their standard counterparts:

| Category | Functions |
|---|---|
| Character checks / conversion | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| String handling | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory handling | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

**Part 2 – Additional functions**
Functions that are not in libc or exist in a different form:

| Function | Purpose |
|---|---|
| `ft_substr` | Extracts a substring from a string (allocated). |
| `ft_strjoin` | Concatenates two strings into a new one. |
| `ft_strtrim` | Trims a set of characters from both ends of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter character. |
| `ft_itoa` | Converts an integer to an allocated string. |
| `ft_strmapi` | Applies a function to each character to create a new string. |
| `ft_striteri` | Applies a function to each character (by index and address) in place. |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a char, string, string + newline, or number to a file descriptor. |

**Part 3 – Linked list functions**
Functions operating on the `t_list` structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

All prototypes are declared in `libft.h`.

## Instructions

### Requirements

- A C compiler (`cc`), `make` and `ar`
- Compilation flags used: `-Wall -Wextra -Werror`

### Compilation

From the root of the repository:

```bash
make          # builds libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + all
```

### Usage in your own program

1. Include the header:

```c
#include "libft.h"
```

2. Compile and link against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

### References

- Linux manual pages (`man 3 <function>`) for every reimplemented libc function
- [cppreference.com – C reference](https://en.cppreference.com/w/c)
- The Linux Programming Interface.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/)

### Use of AI

I used AI as a learning tool during this project, mainly when I got stuck or needed to understand something better.

I used it to:
- Understand how some C functions work and why they are implemented that way.
- Get explanations about pointers, memory allocation, and linked lists.
- Help me find mistakes and understand what was going wrong in my code.

I still wrote, tested, and worked on the functions myself. AI was there to help me understand things, not to replace the learning process.