/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstaddfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:33:15 by antandre          #+#    #+#             */
/*   Updated: 2024/06/21 12:33:19 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);

int	main(void)
{
	t_list	*list1;
	t_list	*add;
	char	*str;
	char	*str2;

	str = "HOLA";
	str2 = "MUNDO";
	list1 = ft_lstnew((char *)str);
	add = ft_lstnew((char *)str2);
	ft_lstadd_front(&list1, add);
	printf("%s", (char *)list1->content);
	printf("%s", (char *)list1->next->content);
}
