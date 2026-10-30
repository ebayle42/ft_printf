/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:19:03 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/26 16:47:15 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		o;
	char	*reponse;

	i = 0;
	o = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	reponse = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!reponse)
		return (NULL);
	while (s1[i] != '\0')
	{
		reponse[i] = s1[i];
		i++;
	}
	while (s2[o] != '\0')
	{
		reponse[i] = s2[o];
		o++;
		i++;
	}
	reponse[i] = '\0';
	return (reponse);
}
