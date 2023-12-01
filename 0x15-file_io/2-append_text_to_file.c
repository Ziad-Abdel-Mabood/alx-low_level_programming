#include "main.h"

/**
 * append_text_to_file -	appends text at the end of a file.
 * @filename:			name of the file.
 * @text_content:		NULL terminated string to add at the end of the file.
 * Return:			1 at success.
 *				-1 at failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, fd;
	ssize_t rd = 0;

	if (!filename)
		return (-1);

	for (len = 0; text_content[len]; len++)
		;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (len)
		rd = write(fd, text_content, len);

	close(fd);
	return (1);
}
