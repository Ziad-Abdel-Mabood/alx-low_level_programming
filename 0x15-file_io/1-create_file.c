#include "main.h"

/**
 * create_file -	creates a file and fills it with text if needed.
 * @filename:		name of the file to create.
 * @text_content:	NULL terminated string to write to the file.
 * Return:		1 at success.
 *			-1 at failure (file can't be created/written/write "fails", etc..)
 */
int create_file(const char *filename, char *text_content)
{
	int len, fd;
	ssize_t rd;

	if (!filename || !text_content)
		return (-1);

	for(len = 0; text_content[len]; len++)
		;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (len)
		rd = write(fd, text_content, len);
	if (rd != len)
		return (-1);

	close(fd);
	return (1);
}
