*This project has been created as part of the 42 curriculum by ebayle.*

# libft

## Description

libft is the first project of the 42 common core: a static library (`libft.a`)
that rewrites some standard C functions and adds a few extra utilities.

Part 1 - Libc functions

- `ft_isalpha` : checks if a character is a letter
- `ft_isdigit` : checks if a character is a digit
- `ft_isalnum` : checks if a character is a letter or a digit
- `ft_isascii` : checks if a character is in the ASCII table (0 to 127)
- `ft_isprint` : checks if a character is printable
- `ft_strlen` : returns the length of a string
- `ft_memset` : fills a memory area with a given byte
- `ft_bzero` : fills a memory area with zeros
- `ft_memcpy` : copies n bytes from one memory area to another
- `ft_memmove` : same as memcpy but works when the areas overlap
- `ft_strlcpy` : copies a string into a buffer of a given size, always null-terminated
- `ft_strlcat` : appends a string to another in a buffer of a given size
- `ft_toupper` : converts a lowercase letter to uppercase
- `ft_tolower` : converts an uppercase letter to lowercase
- `ft_strchr` : finds the first occurrence of a character in a string
- `ft_strrchr` : finds the last occurrence of a character in a string
- `ft_strncmp` : compares two strings up to n characters
- `ft_memchr` : finds a byte in the first n bytes of a memory area
- `ft_memcmp` : compares the first n bytes of two memory areas
- `ft_strnstr` : finds a substring in a string, searching at most len characters
- `ft_atoi` : converts a string to an int
- `ft_calloc` : allocates memory and sets it to zero
- `ft_strdup` : returns a newly allocated copy of a string

Part 2 - Additional functions

- `ft_substr` : returns a new string taken from s, starting at start, of max length len
- `ft_strjoin` : returns a new string made of s1 followed by s2
- `ft_strtrim` : returns a copy of s1 without the characters of set at the start and end
- `ft_split` : splits a string by a separator character into an array of strings
- `ft_itoa` : converts an int to a newly allocated string
- `ft_strmapi` : applies a function to each character and returns the result as a new string
- `ft_striteri` : applies a function to each character of a string, in place
- `ft_putchar_fd` : writes a character to a file descriptor
- `ft_putstr_fd` : writes a string to a file descriptor
- `ft_putendl_fd` : writes a string followed by a newline to a file descriptor
- `ft_putnbr_fd` : writes an integer to a file descriptor

Part 3 - Linked lists (using `t_list` from `libft.h`)

- `ft_lstnew` : creates a new node with the given content
- `ft_lstadd_front` : adds a node at the start of the list
- `ft_lstsize` : returns the number of nodes in the list
- `ft_lstlast` : returns the last node of the list
- `ft_lstadd_back` : adds a node at the end of the list
- `ft_lstdelone` : frees one node and its content with del
- `ft_lstclear` : frees every node of the list and sets the list to NULL
- `ft_lstiter` : applies a function to the content of each node
- `ft_lstmap` : creates a new list by applying a function to each node's content

## Instructions

Compile:

```sh
make        # builds libft.a
```
```sh
make clean  # removes object files
```
```sh
make fclean # removes object files and libft.a
```
```sh
make re     # fclean + all
```

Use it in a project:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -I. -o program
```

## Resources

- `man 3` pages of each libc function
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [libft_tester](https://github.com/nda-cunh/libft_tester) by [nda-cunh](https://github.com/nda-cunh/) 
- [francinette](https://github.com/xicodomingues/francinette) by [xicodomingues](https://github.com/xicodomingues)
- [developpez.com](https://chgi.developpez.com/liste/)
- [StackOverflow](https://stackoverflow.com/questions)

AI usage: Claude was used as a peer reviewer to point out edge cases and bugs
through hints, and to help with the Makefile and this README. All functions
were written by me.
