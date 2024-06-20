/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:08:51 by antandre          #+#    #+#             */
/*   Updated: 2024/05/01 14:12:58 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s", ft_strnstr(argv[1], argv[2], strlen(argv[1])));
	}
}
