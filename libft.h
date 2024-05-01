/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:28:04 by antandre          #+#    #+#             */
/*   Updated: 2024/05/01 13:32:51 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

//FUNCIONES LIBC
size_t				ft_strlen(const char *s);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
size_t				ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dsize);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
