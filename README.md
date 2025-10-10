# 🧩 libft — Your First Custom C Library  

> “Because writing your own standard library makes you a better C developer.”  

---

## 🚀 Overview

**libft** is your very first C project at 42 School!  
It’s a **custom implementation of the standard C library**, bundled as a static library `libft.a`.  
You’ll re-create core libc functions, plus a few handy utilities — all written from scratch.

---

## 🏗️ Project Structure

| File | Description |
|------|--------------|
| **Makefile** | Automates compilation, cleaning, and rebuilding of the library. |
| **libft.h** | Header file containing all prototypes. |
| **ft_*.c** | Individual source files for each function. |
| **libft.a** | The compiled static library (your final product). |

---

## ⚙️ Makefile Rules

| Command | Description |
|----------|-------------|
| `make` or `make all` | Compile all functions and create `libft.a`. |
| `make clean` | Remove object files (`.o`). |
| `make fclean` | Remove object files **and** the library file. |
| `make re` | Rebuild the entire project. |

---

## 📚 Part 1 — Reimplementing libc Functions

These functions mimic their standard library counterparts (from `<string.h>`, `<ctype.h>`, etc.)  
They must behave **exactly like** the originals, except their names begin with `ft_`.

| Category | Functions |
|-----------|------------|
| **Character Checks** | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` |
| **String Length & Memory** | `ft_strlen` `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` |
| **String Handling** | `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` |
| **Memory Search/Compare** | `ft_memchr` `ft_memcmp` |
| **Character Case** | `ft_toupper` `ft_tolower` |
| **Conversion & Allocation** | `ft_atoi` `ft_calloc` `ft_strdup` |

🧠 **Note:**  
- No use of global variables.  
- You must use `ar` to create your library (no `libtool`).  
- Use flags: `-Wall -Wextra -Werror`.

---

## 💡 Part 2 — Additional Utility Functions

These functions aren’t in libc but are extremely useful for string manipulation and I/O.

| Function | Prototype | Description |
|-----------|------------|-------------|
| **ft_substr** | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Returns a substring from `s` starting at `start` with length `len`. |
| **ft_strjoin** | `char *ft_strjoin(char const *s1, char const *s2);` | Concatenates `s1` and `s2` into a new string. |
| **ft_strtrim** | `char *ft_strtrim(char const *s1, char const *set);` | Trims characters from `set` off both ends of `s1`. |
| **ft_split** | `char **ft_split(char const *s, char c);` | Splits string `s` by the delimiter `c`. |
| **ft_itoa** | `char *ft_itoa(int n);` | Converts integer `n` into a string. |
| **ft_strmapi** | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Creates a new string by applying `f` to each char of `s`. |
| **ft_striteri** | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | Applies `f` to each character of `s`, passing its index. |
| **ft_putchar_fd** | `void ft_putchar_fd(char c, int fd);` | Writes a character to the given file descriptor. |
| **ft_putstr_fd** | `void ft_putstr_fd(char *s, int fd);` | Writes a string to the given file descriptor. |
| **ft_putendl_fd** | `void ft_putendl_fd(char *s, int fd);` | Writes a string + newline to the given file descriptor. |
| **ft_putnbr_fd** | `void ft_putnbr_fd(int n, int fd);` | Writes an integer to the given file descriptor. |

---

## 🧰 Example Usage

```bash
# Compile the library
make

# Include libft in your C project
gcc main.c -L. -lft

# Clean up after yourself
make fclean
