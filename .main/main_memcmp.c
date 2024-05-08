/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:05:50 by antandre          #+#    #+#             */
/*   Updated: 2024/05/08 15:11:41 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
  char buffer1[] = "CCCC";
  char buffer2[] = "BBBB";

	printf("%i", ft_memcmp(buffer1, buffer2, sizeof(buffer1)));
}
