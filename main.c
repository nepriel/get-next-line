/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:57:32 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/29 14:57:18 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	**line;
	int		ret;

	if (argc < 1)
		return (0);
	line = malloc(sizeof(**line) * 2);
	fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, line)) != 0)
	{
		printf("%s\n", line[0]);
	}
	free(line);
	return (0);
}
