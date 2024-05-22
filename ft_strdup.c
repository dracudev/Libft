/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:04:24 by antandre          #+#    #+#             */
/*   Updated: 2024/05/22 11:50:43 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

/* 
 * Devuelve un puntero a una nueva cadena de caracteres que es un duplicado
 * de la cadena apuntada por s. La memoria para la nueva cadena se obtiene
 * automáticamente con malloc().
 */

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
