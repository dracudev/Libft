/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:52:48 by antandre          #+#    #+#             */
/*   Updated: 2024/06/23 18:22:50 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//Printar un puntero al valor typecasteado del content de la lista

int	main(void)
{
	int	a = 1;
	int	b = 2;
	t_list	*list1;
	t_list	*list2;

	list1 = ft_lstnew((void *)&a);
	list2 = ft_lstnew((void *)&b);
	ft_lstadd_front(&list1, list2);
	printf("%d", *((int *)ft_lstlast(list1)->content)); 
}
