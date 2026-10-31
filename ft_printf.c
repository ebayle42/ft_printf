/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:24:50 by ebayle            #+#    #+#             */
/*   Updated: 2026/11/01 00:14:13 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(*ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(*ap, unsigned int)));
	else if (c == 'X')
		return (ft_puthexa_long(va_arg(*ap, unsigned int), 1));
	else if (c == 'x')
		return (ft_puthexa_long(va_arg(*ap, unsigned int), 0));
	else if (c == 'p')
		return (ft_putmem(va_arg(*ap, void *)));
	else if (c == '%')
		return (ft_putchar('%'));	
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (!format)
		return (0);
	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += ft_convert(format[i + 1], &ap);
			i++;
		}
		else if (format[i] != '%')
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

#include <stdio.h>
#include <limits.h>
int main (void)
{
	int	a;

	ft_putmem(&a);
	printf("\n%p\n", &a);
	return (0);
}
