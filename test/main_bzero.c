/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:36:17 by antandre          #+#    #+#             */
/*   Updated: 2024/05/02 19:02:24 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
 
#define  BUF_SIZE  20
 
void	ft_bzero(void *s, size_t n);

int main(void)
{
   char buffer[BUF_SIZE + 1];
	 char *string;

	 string = (char *) memset(buffer,'A', sizeof(buffer));
   printf("Buffer contents: %s\n", string);
	 ft_bzero(buffer, sizeof(buffer));
	 printf("Buffer contents: %s\n", string);
}

