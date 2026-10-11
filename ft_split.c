/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 21:36:09 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/11 01:11:51 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	world_len(char const *s, char c, size_t start)
{
	size_t	len;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	return (len);
}

static char	*world_copy(char	const *s, char c, size_t start)
{
	size_t	len;
	char	*ptr;
	size_t	i;

	len = world_len(s, c, start);
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static	char	**ft_split_free(char **tab, size_t j)
{
	while (j > 0)
	{
		j--;
		free(tab[j]);
	}
	free(tab);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	tab = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (tab == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			tab[j] = world_copy(s, c, i);
			if (tab[j] == 0)
				return (ft_split_free(tab, j));
			i = i + world_len(s, c, i);
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}
