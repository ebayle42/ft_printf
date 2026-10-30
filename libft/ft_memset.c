/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:25:24 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/21 10:51:48 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*s;

	s = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		s[i] = c;
		i++;
		n--;
	}
	return (str);
}
