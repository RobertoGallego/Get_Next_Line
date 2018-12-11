#include "get_next_line.h"
#include <fcntl.h>

int main()
{
	int fd;
	char *line;

	fd = open("/dev/random", O_RDONLY);
	get_next_line(fd, &line);
	close(fd);
	return (0);
}
