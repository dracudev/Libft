/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:07:02 by antandre          #+#    #+#             */
/*   Updated: 2024/05/02 17:50:43 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
 
#define  BUF_SIZE  20
 
void	*ft_memset(void *s, int c, size_t n);

int main(void)
{
   char buffer[BUF_SIZE + 1];
   char *string;
	 char *prueba;
 
   prueba = (char *) ft_memset(buffer, 0, sizeof(buffer));
	 printf("\nBuffer contents: %s\n", prueba);
	 string = (char *) ft_memset(buffer,'A', 10);
   printf("\nBuffer contents: %s\n", string);
   ft_memset(buffer+10, 'B', 10);
   printf("\nBuffer contents: %s\n", buffer);
}
