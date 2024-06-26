/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:30:39 by antandre          #+#    #+#             */
/*   Updated: 2024/06/26 18:04:10 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void *ft_toupper2(void *content) 
{
	char *str = (char *)content;
	char *new = ft_strdup(str);
	char *ptr = new;

	while (*ptr) 
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - 32;
		ptr++;
	}
	return (new);
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*new;
	char	*str1 = ft_strdup("Hello, ");
	char	*str2 = ft_strdup("world!");

	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	ft_lstadd_back(&lst1, lst2);
	new = ft_lstmap(lst1, ft_toupper2, free);
	printf("%s", (char *)new->content);
	printf("%s", (char *)new->next->content);

	ft_lstdelone(lst1, free);
  ft_lstdelone(lst2, free);
	ft_lstclear(&new, free);
}
