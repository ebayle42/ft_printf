/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:10:40 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/28 22:16:07 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	ptr = malloc((size) * nmemb);
	if (!ptr)
		return (NULL);
	ptr = ft_memset((unsigned char *)ptr, 0, size * nmemb);
	return (ptr);
}
