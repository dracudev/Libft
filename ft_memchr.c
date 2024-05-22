/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:59:20 by antandre          #+#    #+#             */
/*   Updated: 2024/05/22 12:06:28 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Escanea hasta n bytes del string s buscando la primera coincidencia 
 * del caracter c. Retorna un puntero a la coincidencia o NULL.
 */ 

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sptr;
	unsigned char		ch;
	size_t				i;

	sptr = (unsigned char *)s;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (sptr[i] == ch)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
