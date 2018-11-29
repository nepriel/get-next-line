/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:58:26 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/29 15:33:42 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		checkerror(int fd, char **str, char **line)
{
	char *buf;

	if (fd < 0 || line == NULL || !(buf = ft_strnew(BUFF_SIZE + 1)) \
				|| read(fd, buf, 0) == -1)
		return (-1);
	if (!*str)
	{
		if (!(*str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (-1);
	}
	return (0);
}

char	*readall(char *str, int fd)
{
	char		buff[BUFF_SIZE + 1];
	int			ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
	}
	return (str);
}

int		get_next_line(int const fd, char **line)
{
	static char	*str;
	int			i;

	if (checkerror(fd, &str, line) == -1)
		return (-1);
	if (*str)
		ft_strcpy(*line, str);
	str = readall(str, fd);
	i = 0;
	if (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		(*line) = ft_strsub(str, 0, i);
		str = &str[i + 1];
		return (1);
	}
	else
		(*line) = ft_strdup("");
	return (0);
}
