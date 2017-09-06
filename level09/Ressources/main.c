#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int		fd, ret = 0;
	int		j = 0;
	char	buff[1024];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		exit(-1);

	ret = read(fd, &buff, 1024);
	if (ret <= 0)
		exit(-1);

	buff[ret] = 0;

	for (int i = 0; i < ret -1; ++i)
	{
		printf("%c", buff[i] - j);
		++j;
	}
	printf("\n");
}
