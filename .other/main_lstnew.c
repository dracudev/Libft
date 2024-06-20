/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:33:21 by antandre          #+#    #+#             */
/*   Updated: 2024/06/20 13:55:00 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content);

int	main(void)
{
	char *str1 = "Hello, world!";
	t_list	*node;

	node = ft_lstnew(str1);
	char *prueba = (char *)node->content;
	printf("%s", prueba);
	free(node);
}
