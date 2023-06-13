#include "main.h"
#include <string.h>

/**
 * main - prints the name of the executable file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: status code
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	int y;

	char x[50];

	strcpy(x, argv[0]);
	for (y = 0; x[y]; y++)
		_putchar(x[y]);
	_putchar('\n');

	return (0);
}

