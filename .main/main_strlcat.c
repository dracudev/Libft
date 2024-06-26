/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:21:45 by antandre          #+#    #+#             */
/*   Updated: 2024/05/01 14:33:36 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dsize);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%li", ft_strlcat(argv[1], argv[2], (size_t)0));
		printf("%s", argv[1]);
	}
}
