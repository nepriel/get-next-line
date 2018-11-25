/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:12:25 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/23 12:34:29 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	error(int fd, char **str, char **line)
{
	if (fd == -1 || line == NULL)
		return (-1);
	if (!str)
	{
		str = malloc(sizeof(*str) * (BUFF_SIZE + 1));
		if (str == NULL)
			return (-1);
	}
	return (0);
}


char	*readline 
int	get_next_line(int const fd, char **line)
{
	static char	*str;
	int 		i;

	if (error(fd, &str, line) == -1)
		return (-1);
	if (*str)
		ft_strcpy(*line, str);
	str = readline(str, fd);
	return (0);
}
