#include "main.h"
#include <stdio.h>

/**
 * read_textfile -	reads a textfile and prints it to the
 *			POSIX standart output.
 * @filename:		a string containing the file path to read.
 * @letters:		number of letters it should read and print.
 * Return:		actual number of letters it read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t prnt = 0, rd;
	int file_desc;
	char *buffer;

	if (/*!letters ||*/ !filename)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc < 0)
		return (0);

	while ((rd = read(file_desc, buffer, letters)) != 0)
	{
		buffer[rd] = '\0';
		if (rd < 0)
			return (0);
		prnt = write(1, buffer, rd);
		if (prnt < 0 || prnt != rd)
			return (0);
	}

	printf("rd = %ld\nprnt = %ld\n", rd, prnt);

	free(buffer);
	close(file_desc);
	return (prnt);
}
