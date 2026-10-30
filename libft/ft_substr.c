/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:20:51 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/26 16:48:07 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	size_t				o;
	char				*rep;

	i = 0;
	o = 0;
	if (s == 0)
		return (NULL);
	while (s[i] != '\0' && i != start)
		i++;
	if (len > ft_strlen(&s[i]))
		len = ft_strlen(&s[i]);
	rep = malloc(sizeof(char) * (len + 1));
	if (!rep)
		return (NULL);
	while (o != len)
	{
		rep[o] = s[i];
		o++;
		i++;
	}
	rep[o] = '\0';
	return (rep);
}
