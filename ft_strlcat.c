/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:07:37 by antandre          #+#    #+#             */
/*   Updated: 2024/06/27 12:09:25 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Concatenates two strings with size limiting to prevent buffer overflow.
 */

/*
 * If 'src' or 'dst' is NULL return 0. If 'dst' is NULL and dsize is 0
 * concatenation cannot be performed and return 'src' lenght.
 * 'i' is used to track the current position in 'dst', iterate until the end
 * of 'dst' or until 'i' reaches dsize.
 * Calculate the space left in 'dst' using dsize - i and fill it with src.
 * Return the total lenght of concatenated string (len + i).
 * 'len' is the length of 'src' concatenated into 'dst'.
 * 'i' is the length of 'dst' before concatenation started.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len;

	if (!src)
		return (0);
	if (!dst)
	{
		if (dsize == 0)
			return (ft_strlen(src));
		else
			return (0);
	}
	i = 0;
	while (*dst && i < dsize)
	{
		++dst;
		++i;
	}
	len = ft_strlcpy(dst, src, dsize - i);
	return (len + i);
}
