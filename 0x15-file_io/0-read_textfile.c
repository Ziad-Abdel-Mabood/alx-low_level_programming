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
	char buffer[8000];

	if (!letters || !filename)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc < 0)
		return (0);

	prnt = read(file_desc, buffer, letters);
	prnt = write(STDOUT_FILENO, buffer, prnt);

	close(file_desc);
	return (prnt);
}
