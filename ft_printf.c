/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:24:50 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/31 19:04:26 by ebayle           ###   ########.fr       */
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
		return (ft_puthexa_maj(va_arg(*ap, unsigned int)));
	else if (c == 'x')
		return (ft_puthexa_min(va_arg(*ap, unsigned int)));
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
	int	hex = INT_MAX;
	printf("%x\n", hex);
	ft_printf("%x\n", hex);
}