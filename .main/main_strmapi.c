/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:58:56 by antandre          #+#    #+#             */
/*   Updated: 2024/06/17 11:32:22 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char to_upper(unsigned int i, char c)
{
		
		if (c >= 'a' && c <= 'z')
			c -= 32;
		return (c);
}

int	main(void)
{
	char *str;

	str = "abcedef";
	printf("%s", ft_strmapi(str, to_upper))); 
}
