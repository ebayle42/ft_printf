/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:04:20 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/21 22:20:36 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*occ;

	occ = (char *)s;
	i = 0;
	while (occ[i] != '\0')
		i++;
	while (occ[i] != (char) c && i > 0)
		i--;
	if (occ[i] == (char)c)
		return (&occ[i]);
	return (NULL);
}
