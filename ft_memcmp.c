/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 01:37:30 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/08 02:31:58 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n
		&& ((const unsigned char *)s1)[i] == ((const unsigned char *)s2)[i])
		i++;
	if (i == n)
		return (0);
	return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
}
