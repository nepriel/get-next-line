#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 4000

int main(int argc, char **argv)
{
	int	fd;
	int	ret;
	char	*buf[BUFF_SIZE + 1];

	if (argc < 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	ret = read(fd, buf, BUFF_SIZE);

}
