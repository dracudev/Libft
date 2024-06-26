/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:21:25 by antandre          #+#    #+#             */
/*   Updated: 2024/06/26 16:49:08 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_toupper2(void *content)
{
  char *str = (char *)content;
  while (*str) 
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
   }
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
	ft_lstiter(lst1, ft_toupper2);
	printf("%s", (char *)lst1->content);
	printf("%s", (char *)lst1->next->content);

	ft_lstdelone(lst1, free);
  ft_lstdelone(lst2, free);
}
