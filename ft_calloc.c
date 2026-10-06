/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:06:28 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/06 21:20:37 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (size != 0 && count > SIZE_MAX / size)
		return (0);
	ptr = (void *)malloc(size * count);
	if (ptr == 0)
		return (0);
	while (i < count * size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
