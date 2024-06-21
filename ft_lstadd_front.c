/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:05:54 by antandre          #+#    #+#             */
/*   Updated: 2024/06/21 15:31:57 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Add the node 'new' to the beginning of the list 'lst'.
 * The 'next' node of 'new' points to the node that was previously the
 * first node of the list because 'new' is placed in front of it.
 * The list 'lst' should now point to its first node, which is 'new'.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
