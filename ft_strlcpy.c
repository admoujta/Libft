/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:41:09 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/06 17:50:23 by admoujta         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if(size > 0)
    {
        while (src[i] && i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return(ft_strlen(src));
}