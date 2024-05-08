/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:41:25 by antandre          #+#    #+#             */
/*   Updated: 2024/05/08 15:01:51 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1ptr;
	const unsigned char	*s2ptr;
	size_t				i;

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
