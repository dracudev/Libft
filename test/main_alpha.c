/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:25:50 by antandre          #+#    #+#             */
/*   Updated: 2024/04/29 18:03:15 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_isalpha(int c);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%i", ft_isalpha(atoi(argv[1])));
	}
}
