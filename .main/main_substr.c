/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:00:33 by antandre          #+#    #+#             */
/*   Updated: 2024/05/23 12:04:17 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	const char *s = "Hola como estas";

	printf("%s", ft_substr(s, 5, 12));
}
