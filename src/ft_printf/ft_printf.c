/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:45:46 by antandre          #+#    #+#             */
/*   Updated: 2024/07/17 11:16:37 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_conv(char c, va_list *args, int *len, int *i)
{
	int	res;

	res = 0;
	if (c == 'c')
		res = ft_putchar(va_arg(*args, int), len);
	else if (c == 's')
		res = ft_putstr(va_arg(*args, char *), len);
	else if (c == 'p')
		res = ft_pointer(va_arg(*args, size_t), len);
	else if (c == 'd' || c == 'i')
		res = ft_putnbr(va_arg(*args, int), len);
	else if (c == 'u')
		res = ft_unsigned_int(va_arg(*args, int), len);
	else if (c == 'x')
		res = ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (c == 'X')
		res = ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (c == '%')
		res = ft_putchar('%', len);
	else
		(*i)--;
	if (res == -1)
		return (-1);
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_check_conv(str[i], &args, &len, &i) == -1)
				return (-1);
			i++;
		}
		else
		{
			if (ft_putchar((char)str[i], &len) == -1)
				return (-1);
			i++;
		}
	}
	va_end(args);
	return (len);
}
