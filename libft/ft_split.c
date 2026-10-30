/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:00:32 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/28 15:24:52 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != sep && (str[i + 1] == sep || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	*ft_free(char **strs, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_word(char const *s, int *i, char c)
{
	char	*word;
	int		start;
	int		k;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	word = malloc(sizeof(char) * (*i - start + 1));
	if (!word)
		return (NULL);
	k = 0;
	while (start < *i)
	{
		word[k] = s[start];
		k++;
		start++;
	}
	word[k] = 0;
	return (word);
}

static char	**fill_split(char **tab, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = fill_word(s, &i, c);
			if (!tab[j])
			{
				ft_free(tab, j);
				return (NULL);
			}
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	**result;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	result = fill_split(tab, s, c);
	return (result);
}
