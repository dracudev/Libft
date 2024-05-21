/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:44:16 by antandre          #+#    #+#             */
/*   Updated: 2024/05/21 19:37:16 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

// La función actúa igual que malloc pero añadiendo tres verificaciones de errores e 
// inicializando los bytes en 0.
// Si count o size son 0, asignamos 1 byte de memoria para devolver un puntero no nulo
// que pueda ser pasado a free().
// Si hay integer overflow devolvemos un error.

void	*ft_calloc(size_t count, size_t size)
{
	void *vector;

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
