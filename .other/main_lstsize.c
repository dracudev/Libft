/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:41:59 by antandre          #+#    #+#             */
/*   Updated: 2024/06/23 14:30:06 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst);

int	main(void)
{
	int	a = 1;
	int	b = 2;
	t_list	*list1;
	t_list	*list2;

	list1 = ft_lstnew((void *)&a);
	list2 = ft_lstnew((void *)&b);
	ft_lstadd_front(&list1, list2);
	printf("%d", ft_lstsize(list1));
}
