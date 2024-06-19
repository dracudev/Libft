/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:07:37 by antandre          #+#    #+#             */
/*   Updated: 2024/06/19 16:02:53 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Concatenates two strings with size limiting to prevent buffer overflow.
 * Appends the null-terminator to ensure proper string termination.
 * Return the total length of the string tried to create.
 */

/*
 * If dsize is 0, concatenation cannot be performed,
 * only the length of src is returned.
 * If dsize is less than or equal to the length of dst,
 * concatenation cannot be performed, the length of src plus the destination 
 * size (dsize) is returned.
 * While the end of src has not been reached and the
 * dsize limit has not been reached, copies the character from src to dst,
 * advancing in both indices.
 * If the dsize limit has been reached and there is still room for
 * the null character replaces the last character with a null.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	j = 0;
	i = dlen;
	if (dsize == 0)
		return (slen);
	if (dsize <= dlen)
		return (slen + dsize);
	while (src[j] && (dlen + j) < dsize)
		dst[i++] = src[j++];
	if ((dlen + j) == dsize && dlen < dsize)
		dst[--i] = '\0';
	else
		dst[i] = '\0';
	return (slen + dlen);
}
