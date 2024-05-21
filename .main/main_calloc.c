/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:54:15 by antandre          #+#    #+#             */
/*   Updated: 2024/05/21 19:35:44 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size);

int	main(void)
{
	size_t *vector;
	size_t N = 12038791299999999; //provocar un overflow
	size_t i = 0;

	vector = (size_t *)ft_calloc(N, sizeof(N));
	while (i < N)
	{
		printf("%li", vector[i]);
		i++;
	}
	free (vector);
}
