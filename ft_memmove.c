/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:09:43 by antandre          #+#    #+#             */
/*   Updated: 2024/05/22 12:03:56 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
 * Igual que memcpy pero tiene en cuenta el solapamiento.
 * Copia n bytes del area de memoria src al area de memoria dest.
 * Para evitar solapamiento cuando src es menor que dest: comenzamos 
 * a copiar los bytes desde el final
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destptr;
	const unsigned char	*srcptr;

	if (!dest && !src)
		return (0);
	destptr = (unsigned char *)dest;
	srcptr = (const unsigned char *)src;
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			destptr[i] = srcptr[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
