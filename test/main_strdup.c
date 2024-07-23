/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:25:46 by antandre          #+#    #+#             */
/*   Updated: 2024/05/22 11:28:34 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(const char *s);

int	main(void)
{
	const char	*s;
	char *copy;

	s = "Hola como estas";
	copy = ft_strdup(s);
	printf("%s", copy);
}
