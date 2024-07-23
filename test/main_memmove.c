/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:39:58 by antandre          #+#    #+#             */
/*   Updated: 2024/05/08 13:50:00 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
	char source[80] = "This is looooooooooooonger source";
	char target[80] = "This is the target string";

  printf( "Before memmove, target is \"%s\"\n", target );
  ft_memmove( target, source, sizeof(source));
  printf( "After memmove, target becomes \"%s\"\n", target );
}

