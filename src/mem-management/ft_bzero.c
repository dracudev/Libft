/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:31:20 by antandre          #+#    #+#             */
/*   Updated: 2024/06/27 12:09:55 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Erases the data in the n bytes of memory starting from the position
 * pointed to by s, by writing zeros ('\0').
 */

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	if (!s)
		return ;
	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
