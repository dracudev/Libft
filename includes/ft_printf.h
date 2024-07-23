/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:07:43 by antandre          #+#    #+#             */
/*   Updated: 2024/07/16 17:39:16 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int			ft_putchar(char ch, int *len);
int			ft_putstr(char *args, int *len);

int			ft_putnbr(int nbr, int *len);
int			ft_hexadecimal(unsigned int x, int *len, char x_or_x);
int			ft_unsigned_int(unsigned int u, int *len);
int			ft_pointer(size_t pointer, int *len);

int			ft_printf(const char *str, ...);

#endif
