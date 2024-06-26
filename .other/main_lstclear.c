/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:43:46 by antandre          #+#    #+#             */
/*   Updated: 2024/06/26 15:59:23 by antandre         ###   ########.fr       */
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
	//ft_lstclear(&lst1, del);
	printf("%s", (char *)lst1->content);
	lst1 = lst1->next;
	printf("%s", (char *)lst1->content);
}

/* 
 * Al limpiar la lista deberia dar segmentation fault si tratamos de imprimir
 * cualquiera de sus nodos.
 */
