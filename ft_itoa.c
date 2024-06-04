/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:48:34 by antandre          #+#    #+#             */
/*   Updated: 2024/06/04 19:50:29 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
'get_num_len' es una función auxiliar que se utiliza para obtener
la longitud de un número entero 'n'.

1. En caso de que el número sea negativo se incrementa la len en 1 para
tener en cuenta el signo negativo y se convierte el numero en positivo.
*/

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

/*
'ft_itoa' convierte un número entero 'n' en una cadena de caracteres.

1. Se obtiene la longitud del número entero 'n' y se asigna memoria

2. Se verifica si el número es 0, si es así se asigna '0' a la cadena

3. Se verifica si el número es negativo, si es así se asigna '-' a la cadena
4. Se convierte el número en positivo

5. 'While' donde se obtiene el último dígito del número y se asigna al
último indice de la cadena, convertido en ASCII ('0' + n % 10)

6. Se divide el número por 10 para obtener el siguiente dígito
*/

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = get_num_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
