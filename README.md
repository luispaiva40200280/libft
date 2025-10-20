# 🧩 libft — 42 First Project C Library  

> “Because writing your own standard library makes you a better C developer.”  

---

## 🚀 Overview

**libft** is the first project of the **42 School curriculum**.  
It consists of building a **custom C standard library** — `libft.a` — entirely from scratch.  
You re-implement many of the most commonly used libc functions, plus a collection of additional utilities for string manipulation, memory management, and file I/O.

---

## 🏗️ Project Structure

| File | Description |
|------|--------------|
| **Makefile** | Automates compilation, cleaning, and rebuilding of the library. |
| **libft.h** | Header file containing all prototypes and includes. |
| **ft_*.c** | Individual source files for each function. |
| **libft.a** | The final static library archive. |

---

## ⚙️ Makefile Rules

| Command | Description |
|----------|-------------|
| `make` or `make all` | Compile all functions and create `libft.a`. |
| `make clean` | Remove object files (`.o`). |
| `make fclean` | Remove object files **and** the static library. |
| `make re` | Rebuild the entire project from scratch. |

---

## 📚 Part 1 — Standard libc Reimplementations ✅ *(All Completed)*

Re-implemented versions of essential C standard library functions,  
matching the behavior of their `<string.h>`, `<ctype.h>`, and `<stdlib.h>` counterparts.

| Category | Functions |
|-----------|------------|
| **Character Checks** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| **String Length & Memory** | `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove` |
| **String Handling** | `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` |
| **Memory Search/Compare** | `ft_memchr`, `ft_memcmp` |
| **Character Case** | `ft_toupper`, `ft_tolower` |
| **Conversion & Allocation** | `ft_atoi`, `ft_calloc`, `ft_strdup` |

✅ **Status:** All Part 1 functions implemented and tested successfully.

---

## 💡 Part 2 — Additional Utility Functions ✅ *(All Completed)*

Extended functionality for dynamic string handling, conversions, and file descriptor output.

| Function | Prototype | Description |
|-----------|------------|-------------|
| **ft_substr** | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Extracts a substring from `s`. |
| **ft_strjoin** | `char *ft_strjoin(char const *s1, char const *s2);` | Joins two strings into one. |
| **ft_strtrim** | `char *ft_strtrim(char const *s1, char const *set);` | Trims characters from both ends of `s1`. |
| **ft_split** | `char **ft_split(char const *s, char c);` | Splits a string by a delimiter. |
| **ft_itoa** | `char *ft_itoa(int n);` | Converts an integer to its string representation. |
| **ft_strmapi** | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Creates a new string by applying `f` to each char of `s`. |
| **ft_striteri** | `void ft_striteri(char *s, void (*f)(unsigned int, char *));` | Applies `f` to each char of `s` (in place). |
| **ft_putchar_fd** | `void ft_putchar_fd(char c, int fd);` | Writes a character to a file descriptor. |
| **ft_putstr_fd** | `void ft_putstr_fd(char *s, int fd);` | Writes a string to a file descriptor. |
| **ft_putendl_fd** | `void ft_putendl_fd(char *s, int fd);` | Writes a string followed by a newline. |
| **ft_putnbr_fd** | `void ft_putnbr_fd(int n, int fd);` | Writes an integer to a file descriptor. |

✅ **Status:** All Part 2 functions fully implemented and verified.

---

## 🧩 Bonus Part — Linked List Functions 🧠 *(Optional / In Progress)*

In the **bonus section**, you’ll create a small linked list library to manage generic content dynamically.  
These functions will allow creating, iterating, mapping, and freeing `t_list` structures safely.

### 📘 Bonus Prototypes

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Prototype | Description |
|-----------|------------|-------------|
| **ft_lstnew** | `t_list *ft_lstnew(void *content);` | Allocates and returns a new node. |
| **ft_lstadd_front** | `void ft_lstadd_front(t_list **lst, t_list *new);` | Adds a node to the start of the list. |
| **ft_lstsize** | `int ft_lstsize(t_list *lst);` | Counts the number of nodes in a list. |
| **ft_lstlast** | `t_list *ft_lstlast(t_list *lst);` | Returns the last node. |
| **ft_lstadd_back** | `void ft_lstadd_back(t_list **lst, t_list *new);` | Adds a node to the end of the list. |
| **ft_lstdelone** | `void ft_lstdelone(t_list *lst, void (*del)(void *));` | Frees a single node’s content. |
| **ft_lstclear** | `void ft_lstclear(t_list **lst, void (*del)(void *));` | Deletes and frees all nodes. |
| **ft_lstiter** | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Applies a function to all nodes. |
| **ft_lstmap** | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Creates a new list by applying a function to each node. |

🧩 **Status:** Planned / Work in progress.

---

## 🧪 Testing

Thorough testing is essential to verify that your library behaves exactly like the standard C library.  
You can use a combination of **manual tests**, **community testers**, and **unit frameworks**.

### 🧭 1. Manual Testing

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft
./a.out
```

Example:
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("isalpha('A') = %d\n", ft_isalpha('A'));
	printf("strlen(\"42\") = %zu\n", ft_strlen("42"));
	printf("atoi(\"-123\") = %d\n", ft_atoi("-123"));
	return (0);
}
```

---

### 🧰 2. Automated Testers

#### 🔹 [Tripouille/libftTester](https://github.com/Tripouille/libftTester)
```bash
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make a
```

#### 🔹 [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
```bash
git clone https://github.com/alelievr/libft-unit-test.git
cd libft-unit-test
make
```

#### 🔹 [jtoty/Libftest](https://github.com/jtoty/Libftest)
```bash
git clone https://github.com/jtoty/Libftest.git
cd Libftest
make
```

---

### ✅ 3. Testing Tips

- Always compile with `-Wall -Wextra -Werror`.  
- Check for memory leaks with `valgrind`:  
  ```bash
  valgrind --leak-check=full ./a.out
  ```
- Test empty strings, `NULL` inputs (when allowed), and edge cases like `INT_MIN` and `INT_MAX`.
- Compare your outputs with those of the real libc functions (`strcmp`, `strlen`, etc.) for accuracy.

---

## 🏁 Project Status

✅ **Part 1:** All libc functions complete and verified.  
✅ **Part 2:** All utility functions complete and verified.  
🧩 **Bonus Part:** Linked list utilities — optional, in progress.  
🧪 **Testing:** Manual and automated validation completed using community testers.  
