/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:23:14 by antandre          #+#    #+#             */
/*   Updated: 2024/06/04 16:28:47 by antandre         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char    *ft_itoa(int n);

int main(void)
{
    int num = 42;
    char *str = ft_itoa(num);
    printf("Number: %d\n", num);
    printf("String: %s\n", str);
    free(str);
    return 0;
}