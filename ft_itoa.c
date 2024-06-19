/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:48:34 by antandre          #+#    #+#             */
/*   Updated: 2024/06/19 13:36:10 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 * 'get_num_len' is a helper function used to obtain
 * the length of an integer 'n'.
 *
 * If the number is negative, the length is incremented by 1 to account
 * for the negative sign, and the number is converted to positive.
 */

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n != 0)
	{
		if (n < 0)
		{
			n *= -1;
			len++;
		}
		while (n != 0)
		{
			n /= 10;
			len++;
		}
	}
	else
		len = 1;
	return (len);
}

/*
 * 'ft_itoa' converts an integer 'n' into a character string.
 * 1. The length of the integer 'n' is obtained and memory is allocated.
 * 2. It checks if the number is 0, and if so, assigns '0' to the string.
 * 3. It checks if the number is negative, and if so, assigns '-' to string.
 * 4. The number is converted to positive.
 * 5. A 'while' loop is used to get the last digit of the number and assign
 * it to the last index of the string, converted to ASCII ('0' + n % 10).
 * 6. The number is divided by 10 to get the next digit.
 */

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nbr;

	len = get_num_len(n);
	nbr = n;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}
