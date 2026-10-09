/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 23:57:21 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/09 01:10:55 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t	len, unsigned int start, size_t total)
{
	unsigned int	r;

	if (start >= total)
		return (0);
	r = total - start;
	if (len < r)
		return (len);
	return (r);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	total_len;
	size_t	copy_len;

	total_len = ft_strlen(s);
	copy_len = min(len, start, total_len);
	ptr = malloc(sizeof(char) * (copy_len + 1));
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < copy_len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
