/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:24:50 by ebayle            #+#    #+#             */
/*   Updated: 2026/11/01 19:53:35 by ebayle           ###   ########.fr       */
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
		return (ft_putnbr(va_arg(*ap, int), 0));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(*ap, unsigned int)));
	else if (c == 'X' || c == 'x')
		return (ft_puthexa_long(va_arg(*ap, unsigned int), c));
	else if (c == 'p')
		return (ft_putmem(va_arg(*ap, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_putnbr_unsigned(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
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
