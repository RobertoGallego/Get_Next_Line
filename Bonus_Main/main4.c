#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int ret, fd1, fd2, fd3;
    char *line;

    line = NULL;
    fd1 = open("01", O_RDONLY);
    fd2 = open("02", O_RDONLY);
    fd3 = open("03", O_RDONLY);

    // Error test
    ret = get_next_line(-55465, &line);
    ft_strdel(&line);
    ret = get_next_line(42, &line);
    ft_strdel(&line);

    // Read one line fd1
    ret = get_next_line(fd1, &line);
    ft_strdel(&line);

    // Read fd2
    while ((ret = get_next_line(fd2, &line)) >= 0)
    {
        ft_strdel(&line);
        if (ret == 0)
            break ;
    }

    // Read fd3
    while ((ret = get_next_line(fd3, &line)) >= 0)
    {
        ft_strdel(&line);
        if (ret == 0)
            break ;
    }

    // Read fd1
    while ((ret = get_next_line(fd1, &line)) >= 0)
    {
        ft_strdel(&line);
        if (ret == 0)
            break ;
    }

    close(fd1);
    close(fd2);
    close(fd3);
	while (1)
		;
}
