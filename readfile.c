#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <string.h>
#define BUFF_SIZE 6

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;

	a = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return ((char *)s + i);
		i++;
	}
	if (a == '\0')
		return ((char *)s + i);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = strlen(s1) + strlen(s2);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[j + i] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char *get_all(int fd, char *buff)
{
	char *str;
	int ret;

	str = malloc(sizeof(char) * 1);
	ret = read(fd, buff, BUFF_SIZE);
	while (ret != 0)
	{
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
		ret = read(fd, buff, BUFF_SIZE);
	}
	return (str);
}

char *print_couper_decal(char *str)
{
}

int main(int argc, char **argv)
{
	int fd;
	char buff[BUFF_SIZE + 1];
	char *str;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	else
	{
		str = get_all(fd, buff);
		printf("%s", str);
	}	
	return (0);
}
