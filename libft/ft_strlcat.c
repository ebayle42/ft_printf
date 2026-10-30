/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:47:07 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/22 10:54:56 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	o;
	size_t	len_src;
	size_t	len_dest;

	i = 0;
	o = 0;
	while (i < size && dst[i] != '\0')
		i++;
	len_dest = i;
	while (src[o] != '\0')
		o++;
	len_src = o;
	if (size <= len_dest)
		return (size + len_src);
	o = 0;
	while (src[o] != '\0' && i < size - 1)
	{
		dst[i] = src[o];
		i++;
		o++;
	}
	dst[i] = '\0';
	return (len_dest + len_src);
}
