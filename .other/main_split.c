/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:17:47 by antandre          #+#    #+#             */
/*   Updated: 2024/05/30 18:21:13 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char const *s, char c);

int main(void)
{
    char *str = "Hello,World,Split,Me";
    char **result = ft_split(str, ',');
    if (result)
    {
        int i = 0;
        while (result[i])
        {
            printf("%s\n", result[i]);
            i++;
        }
        free(result);
    }
    return 0;
}