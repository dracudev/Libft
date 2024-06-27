/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:41:25 by antandre          #+#    #+#             */
/*   Updated: 2024/06/27 12:09:41 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Compares the first n bytes of the memory areas s1 and s2.
 * Returns an integer less than, equal to, or greater than 0.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1ptr;
	const unsigned char	*s2ptr;
	size_t				i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	s1ptr = (const unsigned char *)s1;
	s2ptr = (const unsigned char *)s2;
	while (i < n)
	{
		if (s1ptr[i] != s2ptr[i])
			return ((int)(s1ptr[i] - s2ptr[i]));
		i++;
	}
	return (0);
}
