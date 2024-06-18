/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:59:20 by antandre          #+#    #+#             */
/*   Updated: 2024/05/23 13:51:45 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Scans up to n bytes of the string s for the first occurrence of 
 * the character c. Returns a pointer to the match or NULL.
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
