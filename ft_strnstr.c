/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:36:11 by antandre          #+#    #+#             */
/*   Updated: 2024/06/27 12:15:10 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Locates the first occurrence of the null-terminated string big
 * within the first n bytes of the null-terminated string little.
 * Returns a pointer to the located substring,
 * or NULL if the substring is not found.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}
