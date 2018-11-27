/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:12:25 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/27 10:02:40 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	checkerror(int fd, char **str, char **line)
{
	if (fd == -1 || line == NULL)
		return (-1);
	if (!*str)
	{
		*str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1));
		if (*str == NULL)
			return (-1);
	}
	return (0);
}

char	*readline(char *str, int fd)
{
	char	buff[BUFF_SIZE + 1];
	int	ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
	}
	return (str);
}

int	get_next_line(int const fd, char **line)
{
	static char	*str;
	int		i;

	if (checkerror(fd, &str, line) == -1)
		return (-1);
	if (*str)
		ft_strcpy(*line, str);
	str = readline(str, fd);
	i = 0;
	if (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		if (i == 0)
			(*line) = ft_strdup("");
		else
		{
			(*line) = ft_strsub(str, 0, i);
			str = &str[i + 1];
		}
		return (1);
	}
	else
		(*line) = ft_strdup("");
	return (0);
}
