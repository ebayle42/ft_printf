/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:52:57 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/26 16:39:20 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lens(long int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	int			j;
	long int	nbr;
	char		*reponse;

	i = ft_lens(n) - 1;
	j = 0;
	nbr = n;
	reponse = malloc(sizeof(char) * (ft_lens(nbr) + 1));
	if (!reponse)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		reponse[j] = '-';
		j++;
	}
	while (i >= j)
	{
		reponse[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	reponse[ft_lens(n)] = '\0';
	return (reponse);
}
