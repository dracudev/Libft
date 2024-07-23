/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:09:47 by antandre          #+#    #+#             */
/*   Updated: 2024/06/19 11:27:21 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Compares the first n bytes of two strings.
 * Returns an integer less than, equal to, or greater than 0
 * if the first n bytes of s1 are found, respectively,
 * to be less than, to match, or be greater than the first n bytes of s2.
 * The use of unsigned char ensures that extended ASCII values (beyond 127)
 * are handled correctly without being interpreted as negative.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
