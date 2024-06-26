/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:47:58 by antandre          #+#    #+#             */
/*   Updated: 2024/06/26 14:24:42 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	char	*str1 = ft_strdup("Hello, ");
	char	*str2 = ft_strdup("world!");

	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	ft_lstadd_back(&lst1, lst2);
	printf("%s", (char *)lst1->content);
	lst1 = lst1->next;
	printf("%s", (char *)lst1->content);
	//ft_lstdelone(lst1, del);
	//printf("%s", (char *)lst1->content);
}

/* Al borrar el nodo e intentar imprimirlo dará error de segmentación */
