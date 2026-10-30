/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 23:08:16 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/24 18:05:38 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	o;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	o = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (o > i && ft_strchr(set, s1[o - 1]))
		o--;
	res = ft_substr(s1, i, o - i);
	return (res);
}
