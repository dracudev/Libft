/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:55:30 by antandre          #+#    #+#             */
/*   Updated: 2024/06/17 14:33:06 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Applies the function 'f' to each character of the string 's',
 * providing as parameters the index of each character within 's'
 * and the address of character itself, which can be modified if necessary.
 * It does not return anything.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
