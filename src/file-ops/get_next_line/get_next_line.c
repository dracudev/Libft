/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:29:42 by antandre          #+#    #+#             */
/*   Updated: 2024/08/01 14:51:00 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_last_line(char **saved)
{
	char	*res;
	int		i;

	if (!(*saved) || !(*saved)[0])
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(*saved) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while ((*saved)[i] != '\0')
	{
		res[i] = (*saved)[i];
		i++;
	}
	res[i] = '\0';
	free(*saved);
	*saved = NULL;
	return (res);
}

char	*ft_readfd(char **saved, int fd)
{
	int		readed;
	char	*buffer;

	while (ft_isnewline((*saved)) == -1)
	{
		buffer = malloc(BUFFER_SIZE * sizeof(char));
		if (!buffer)
			return (NULL);
		readed = read(fd, buffer, BUFFER_SIZE);
		if (readed > 0)
			readed = ft_strncat(saved, buffer, readed);
		free(buffer);
		if (readed == 0)
			return (get_last_line(saved));
		else if (readed == -1)
		{
			if ((*saved))
			{
				free((*saved));
				(*saved) = NULL;
			}
			return (NULL);
		}
	}
	return (ft_strtrim_jump(saved));
}

char	*get_next_line(int fd)
{
	static char	*saved[1024];

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	if (saved[fd] && ft_isnewline(saved[fd]) > -1)
		return (ft_strtrim_jump(&saved[fd]));
	else
		return (ft_readfd(&saved[fd], fd));
	return (NULL);
}
