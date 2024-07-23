/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_text.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:30:27 by antandre          #+#    #+#             */
/*   Updated: 2024/07/16 17:45:14 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char ch, int *len)
{
	if (write(1, &ch, 1) == -1)
		return (-1);
	(*len)++;
	return (0);
}

int	ft_putstr(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		(*len) += 6;
		return (0);
	}
	while (args[i])
	{
		if (ft_putchar(args[i], len) == -1)
			return (-1);
		i++;
	}
	return (0);
}
