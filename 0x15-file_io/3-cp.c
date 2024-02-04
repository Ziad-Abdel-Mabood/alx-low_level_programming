#include "main.h"
#include <stdio.h>

#define ERR_USAGE "Usage: cp file_from file_to\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main -	copies the content of a file to another file.
 * @ac:		argument count.
 * @av:		argument vector.
 * Return:	0 at success.
 *		at failure:	97 (wrong number of arguments).
 *				98 (file deosn't exist or cannot read it).
 *				99 (can not create or write failed).
 *				100 (can not close a file descriptor).
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t rd;
	char buffer[1024];

	if (ac != 3)
		dprintf(2, ERR_USAGE), exit(97);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(2, ERR_READ, av[1]), exit(98);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file_to == -1)
		dprintf(2, ERR_WRITE, av[2]), exit(99);

	while ((rd = read(file_from, buffer, 1024)) > 0)
		if (write(file_to, buffer, rd) != rd)
			dprintf(2, ERR_WRITE, av[2]), exit(99);
	if (rd == -1)
		dprintf(2, ERR_READ, av[1]), exit(98);

	file_from = close(file_from);
	if (file_from == -1)
		dprintf(2, ERR_CLOSE, file_from), exit(100);
	file_to = close(file_to);
	if (file_to == -1)
		dprintf(2, ERR_CLOSE, file_to), exit(100);

	return (0);
}

