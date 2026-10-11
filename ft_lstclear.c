/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:40:07 by admoujta          #+#    #+#             */
/*   Updated: 2026/10/11 13:03:31 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	tmp = *lst;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = tmp;
	}
	*lst = NULL;
}
