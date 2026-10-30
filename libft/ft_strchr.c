/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:57:38 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/22 14:16:15 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*occ;

	occ = (char *)s;
	i = 0;
	while (occ[i] != '\0' && occ[i] != (char) c)
		i++;
	if (occ[i] == (char)c)
		return (&occ[i]);
	return (NULL);
}
