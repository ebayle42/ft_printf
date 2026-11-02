*This project has been created as part of the 42 curriculum by ebayle.*

# ft_printf

## Description

ft_printf, because ft_putnbr() and ft_putstr() aren’t enough

The goal is to code a mimic of printf() with all of these arguments : cspdiuxX%

## Functions

- `ft_printf()` : main function of the project that reads the format string and prints each argument according to its conversion
- `ft_convert()` : static helper that checks the conversion character and calls the right print function with the next argument from the `va_list`
- `ft_putchar()` : prints a single character and returns 1
- `ft_putstr()` : prints a string and returns its length or prints `(null)` and returns 6 if the string is NULL
- `ft_putnbr()` : prints a signed integer and returns the number of characters printed including the minus sign
- `ft_putnbr_unsigned()` : prints an unsigned integer recursively and returns the number of digits printed
- `ft_puthexa_long()` : prints a number in hexadecimal in lowercase or uppercase depending on the conversion (`x` or `X`) and returns the number of digits printed
- `ft_putmem()` : prints a pointer address in hexadecimal with the `0x` prefix or `(nil)` if the pointer is NULL and returns the number of characters printed

## Supported conversions

- `%c` : prints a single character
- `%s` : prints a string
- `%p` : prints a pointer address in hexadecimal
- `%d` : print a signed decimal integer
- `%i` : print a signed decimal integer
- `%u` : prints an unsigned decimal integer
- `%x` : prints a number in lowercase hexadecimal
- `%X` : prints a number in uppercase hexadecimal
- `%%` : prints a percent sign

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
- [printf_tester](https://github.com/nda-cunh/printf_tester) by [nda-cunh](https://github.com/nda-cunh/)

AI usage: Claude was used as a peer reviewer to point out edge cases and bugs
through hints, and to help with the Makefile and this README. All functions
were written by me.
