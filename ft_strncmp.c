/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:25:14 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/06 14:09:17 by admoujta         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int ft_strncmp(const char *s1,const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if(n == 0)
        return (0);
    while ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i] && i < n - 1 && s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}