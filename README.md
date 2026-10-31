*This project has been created as part of the 42 curriculum by ebayle.*

# ft_printf

## Description

ft_printf, because ft_putnbr() and ft_putstr() aren’t enough
the goal is to code a mimic of printf()

`ft_printf.c` : main file of the project where ft_printf() is write
`ft_printf.h` : .h file of the project, contains all the syntax of all functions
`ft_printf_utils.c` : this is the file where majority of functions are write
`ft_printf_list.c` : file where arg is used 

## Instructions

Compile:

```sh
make        # builds libftprintf.a
```
```sh
make clean  # removes object files
```
```sh
make fclean # removes object files and libftprintf.a
```
```sh
make re     # fclean + all
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
