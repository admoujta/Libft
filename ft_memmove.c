/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 03:12:18 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/09 00:00:28 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((unsigned char *)dst < (const unsigned char *)src)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		}
	}
	return (dst);
}
