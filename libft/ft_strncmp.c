/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:13:06 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/22 14:09:12 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	i = 0;
	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (str[i] > str2[i] || str[i] < str2[i])
			return (str[i] - str2[i]);
		i++;
	}
	return (0);
}
