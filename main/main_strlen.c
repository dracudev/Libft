/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:30:53 by antandre          #+#    #+#             */
/*   Updated: 2024/04/29 13:42:38 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%li", ft_strlen(argv[1]));
}
