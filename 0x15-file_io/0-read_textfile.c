#include "main.h"

/**
 * read_textfile -  reads a text file
 * and prints it to the POSIX standard output
 * @filename: file
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letter it could open
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t cont, pr;

	if (filename == NULL || !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	cont = read(fd, c, letters);
	if (cont < 0)
		return (0);
	c[cont] = '\0';
	pr = write(STDOUT_FILENO, c, cont);
	if (pr < 0)
		return (0);
	close(fd);
	free(c);
	return (pr);
}

