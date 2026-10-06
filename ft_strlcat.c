/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:15:47 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/06 16:19:22 by admoujta         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t ft_strlcat(char *dst, char const *src, size_t size)
{
    size_t len_dst;
    size_t len_src;
    size_t i;
    size_t j;

    i = 0;
    j = ft_strlen(dst);
    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);

    if(size <= 0)
        return (size + len_dst);
    while (src[i] && j < size - 1)
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[i] = '\0';
    if(size < len_dst)
        return (size + len_src);
    return (len_dst + len_src);
}