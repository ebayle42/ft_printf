/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:37:36 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/22 10:30:04 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	len;

	s = (char *)src;
	i = 0;
	j = 0;
	len = ft_strlen(s);
	if (size == 0)
		return (len);
	while (s[i] != '\0' && size - 1 > i)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (len);
}
