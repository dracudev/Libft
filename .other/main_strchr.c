/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:48:29 by antandre          #+#    #+#             */
/*   Updated: 2024/05/01 17:49:28 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

#define SIZE 40

//char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int main(void)
{
  char buffer1[SIZE] = "computer program";
  char *ptr;
  int	ch = 'x';
 
  ptr = ft_strrchr(buffer1, ch);
  printf( "The first/last occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );
}
