/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 21:53:43 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/26 16:47:37 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rep;
	char			str;

	i = 0;
	if (f == 0 || s == 0)
		return (NULL);
	rep = malloc(sizeof(char) * ft_strlen(&s[i]) + 1);
	if (!rep)
		return (NULL);
	while (s[i] != '\0')
	{
		str = s[i];
		rep[i] = f(i, str);
		i++;
	}
	rep[i] = '\0';
	return (rep);
}
