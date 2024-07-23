/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:18:34 by antandre          #+#    #+#             */
/*   Updated: 2024/05/08 14:26:26 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
   char cadena[] = "Erase una vez...";
   char *puntero;

   puntero = (char *)ft_memchr( cadena, 'a', 5 );
   printf( "%s\n", cadena);
   printf( "%s\n", puntero );

   return 0;
}
