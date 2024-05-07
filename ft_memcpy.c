/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:25:41 by antandre          #+#    #+#             */
/*   Updated: 2024/05/07 18:40:46 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destptr;
	unsigned const char	*srcptr;

	destptr = (unsigned char *)dest;
	srcptr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destptr[i] = srcptr[i];
		i++;
	}
	return (dest);
}
