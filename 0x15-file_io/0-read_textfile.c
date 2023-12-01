#include "main.h"

/**
 * read_textfile -	reads a textfile and prints it to the
 *			POSIX standart output.
 * @filename:		a string containing the file path to read.
 * @letters:		number of letters it should read and print.
 * Return:		actual number of letters it read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t prnt;
	int file_desc;
	char *buffer;

	if (!letters || !filename)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		free(buffer);
		return (0);
	}

	while ((prnt = read(file_desc, buffer, letters)) != 0)
		prnt = write(1, buffer, prnt);

	free(buffer);
	close(file_desc);
	return (prnt);
}
