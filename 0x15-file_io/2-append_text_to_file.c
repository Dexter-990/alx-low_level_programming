#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename:  name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (!text_content)
		text_content = "";

	w = write(fd, text_content, strlen(text_content));
	if (w < 0)
		return (-1);
	return (1);
}
