/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:43:24 by antandre          #+#    #+#             */
/*   Updated: 2024/04/30 13:43:51 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%li", ft_strlcpy(argv[1], argv[2], ft_strlen(argv[1])));
		printf("%s", argv[1]);
	}
}

