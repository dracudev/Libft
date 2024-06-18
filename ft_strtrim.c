/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:49:36 by antandre          #+#    #+#             */
/*   Updated: 2024/05/28 12:02:45 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

/*
 * Eliminates all characters from the string 'set' at the beginning and 
 * end of 's1' until a character not belonging to 'set' is encountered.
 * It creates two loops that iterate from the start and end, removing
 * all matching characters.
 * Memory is allocated with malloc and the value of 's1' is copied to 'str', 
 * trimming the leading and trailing matching characters.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		str = (char *)malloc((end - start + 1) * sizeof(char));
		if (str)
			ft_strlcpy(str, &s1[start], end - start + 1);
	}
	return (str);
}
