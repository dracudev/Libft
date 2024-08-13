/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:08:42 by antandre          #+#    #+#             */
/*   Updated: 2024/08/01 12:53:51 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_isnewline(char *buffer)
{
	int	i;

	if (!buffer)
		return (-1);
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_strncat(char **saved, char *buffer, int size)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (!(*saved))
		str = malloc((size + 1) * sizeof(char));
	else
		str = malloc(((ft_strlen(*saved) + size) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (*saved && (*saved)[i])
	{
		str[i] = (*saved)[i];
		i++;
	}
	j = 0;
	while (j < size)
		str[i++] = buffer[j++];
	str[i] = '\0';
	if (*saved)
		free(*saved);
	*saved = NULL;
	*saved = str;
	return (1);
}

char	*ft_strtrim_jump(char **saved)
{
	char	*strcut;
	char	*strsaved;
	int		i;
	int		j;

	i = -1;
	strcut = malloc((ft_isnewline(*saved) + 2) * sizeof(char));
	if (!strcut)
		return (NULL);
	while ((*saved)[++i] != '\n')
		strcut[i] = (*saved)[i];
	strcut[i++] = '\n';
	strcut[i] = '\0';
	strsaved = NULL;
	if ((*saved)[i])
	{
		j = 0;
		strsaved = malloc((ft_strlen(&(*saved)[i]) + 1) * sizeof(char));
		while ((*saved)[i])
			strsaved[j++] = (*saved)[i++];
		strsaved[j] = '\0';
	}
	free(*saved);
	*saved = strsaved;
	return (strcut);
}
