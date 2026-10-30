*This project has been created as part of the 42 curriculum by ebayle.*

# ft_printf

## Description

ft_printf, because ft_putnbr() and ft_putstr() aren’t enough
the goal is to re-code printf()

`ft_printf.c` : 
`ft_printf.h` : 
`ft_printf_utils.c` : 

## Instructions

Compile:

```sh
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

Use it in a project:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -I. -o program
```

## Resources

- `man 3` page of printf() function
- `man 3` page of va_start, va_arg, va_end and va_copy
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [printf_tester](https://github.com/nda-cunh/printf_tester)
- [StackOverflow](https://stackoverflow.com/questions)

AI usage: Claude was used as a peer reviewer to point out edge cases and bugs
through hints, and to help with the Makefile and this README. All functions
were written by me.
