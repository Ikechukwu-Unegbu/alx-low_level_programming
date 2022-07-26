#include "main.h"

/**
 * append_text_to_file - append text to file ending
 * @filename: filename.
 * @text_content: text to append.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letterno;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letterno = 0; text_content[letterno]; letterno++)
			;

		rwr = write(fd, text_content, letterno);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
