/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstaddback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:48:42 by antandre          #+#    #+#             */
/*   Updated: 2024/06/26 12:58:17 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	char	*str1 = "Hello, ";
	char	*str2 = "world!";

	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	ft_lstadd_back(&lst1, lst2);
	while (lst1)
	{
		printf("%s", (char *)lst1->content);
		lst1 = lst1->next;
	}
}
