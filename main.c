/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:57:32 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/27 10:02:36 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int		fd;
	char	**line;
	int tst;

	if (argc < 2)
		return (0);
	line = malloc(sizeof(**line) * 1000000);
	fd = open(argv[1], O_RDONLY);
		get_next_line(fd, line);
		printf("%s\n", line[0]);
	free(line);
	return (0);
}
