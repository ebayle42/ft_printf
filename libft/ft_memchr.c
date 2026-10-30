/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:40:08 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/26 16:34:38 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*occ;

	occ = (unsigned char *)s;
	i = 0;
	while ((i < n) && (occ[i] != (unsigned char) c))
		i++;
	if (i < n)
		return (&occ[i]);
	return (NULL);
}
