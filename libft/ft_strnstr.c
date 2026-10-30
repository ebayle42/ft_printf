/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:28:00 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/26 16:35:57 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	o;
	char	*str;
	char	*to_find;

	str = (char *) big;
	to_find = (char *) little;
	i = 0;
	if (ft_strlen(little) > len)
		return (NULL);
	if (to_find[i] == '\0')
		return (&str[i]);
	while (str[i] && i < len)
	{
		o = 0;
		while (str[i + o] != '\0' && str[i + o] == to_find[o] && (i + o) < len)
			o++;
		if (to_find[o] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
