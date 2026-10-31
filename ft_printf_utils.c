/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:15:35 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/31 12:53:57 by ebayle           ###   ########.fr       */
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
		return "(null)";
	ft_putstr_fd(s, 1);;
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
