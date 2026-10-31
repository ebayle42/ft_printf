/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:15:35 by ebayle            #+#    #+#             */
/*   Updated: 2026/11/01 00:34:34 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if (!s)
		return (0);
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_putnbr(int n)
{
	int		count;
	long	nb;

	ft_putnbr_fd(n, 1);
	count = 1;
	nb = n;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int	ft_puthexa_long(unsigned long n, int c)
{
	int		i;
	int		tmp;
	char	res[17];

	i = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		tmp = n % 16;
		if (tmp < 10)
			res[i++] = tmp + '0';
		else if (c == 'X')
			res[i++] = tmp - 10 + 'A';
		else
			res[i++] = tmp - 10 + 'a';
		n = n / 16;
	}
	tmp = i;
	while (i > 0)
		ft_putchar(res[--i]);
	return (tmp);
}

int	ft_putmem(void *n)
{
	if (n == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (2 + ft_puthexa_long((unsigned long)n, 0));
}
