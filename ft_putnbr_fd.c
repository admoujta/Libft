/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 10:15:53 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/09 10:51:01 by admoujta         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
		write(fd, "-2147483648", 11);
	else if(n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if(n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}