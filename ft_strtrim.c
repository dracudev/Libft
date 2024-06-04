/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:49:36 by antandre          #+#    #+#             */
/*   Updated: 2024/05/28 12:02:45 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);

/*
 * Elimina todos los carácteres de la string set desde el principio y desde
 * el final en s1, hasta encontrar un caracter no perteneciente a set.
 * Creamos dos bucles que iteran desde el inicio y el final buscando todas
 * las coincidencias de caracteres.
 * Reservamos espacio con malloc y copiamos en str el valor de s1 recortando
 * el inicio y final de caracteres coincidentes.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		str = (char *)malloc((end - start + 1) * sizeof(char));
		if (str)
			ft_strlcpy(str, &s1[start], end - start + 1);
	}
	return (str);
}
