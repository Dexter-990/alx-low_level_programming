#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_TRUNC | O_WRONLY | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	w = write(fd, text_content, strlen(text_content));
	close(fd);
	if (w < 0)
		return (-1);
	return (1);
}
