/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:44:16 by antandre          #+#    #+#             */
/*   Updated: 2024/05/22 11:53:18 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

/*
 * The function acts like malloc but with three error checks
 * and initializes the bytes to 0.
 * If count or size is 0, we allocate 1 byte of memory to return a 
 * non-null pointer that can be passed to free().
 * If there is an integer overflow, it returns an error.
 */

void	*ft_calloc(size_t count, size_t size)
{
	void	*vector;

	vector = malloc(size * count);
	if (vector == NULL)
		return (NULL);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (size != 0 && count > (size_t) - 1 / size)
		return (NULL);
	ft_bzero(vector, size * count);
	return (vector);
}
