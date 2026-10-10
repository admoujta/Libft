/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 03:25:17 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/10 20:39:43 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	nbr;
	int		i;

	nbr = n;
	ptr = malloc(sizeof(char) * (word_len(n) + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[word_len(n)] = '\0';
	i = word_len(n) - 1;
	if (nbr == 0)
		ptr[0] = '0';
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		ptr[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (ptr);
}
