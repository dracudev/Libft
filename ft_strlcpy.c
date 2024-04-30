/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:24:01 by antandre          #+#    #+#             */
/*   Updated: 2024/04/30 13:45:08 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	ssize;
	size_t	i;

	ssize = ft_strlen(src);
	dsize = ft_strlen(dst);
	i = 0;
	if (dsize < 1)
		return (ssize);
	while (dst[i] != '\0' && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ssize);
}
