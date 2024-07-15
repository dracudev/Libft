/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:08:01 by antandre          #+#    #+#             */
/*   Updated: 2024/05/07 17:10:13 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dest, const void* src, size_t n);

int main(void)
{
	char source[80] = "This is the source string";
	char target[80] = "This is the target string";

  printf( "Before memcpy, target is \"%s\"\n", target );
  ft_memcpy( target, source, sizeof(source));
  printf( "After memcpy, target becomes \"%s\"\n", target );
}
