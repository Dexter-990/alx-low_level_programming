#include "main.h"
#include <string.h>

/**
 * main - prints all argument vectors
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: status code
 */

int main(int argc, char *argv[])
{
	int x, y;
	char p[50];

	for (x = 0; x < argc; x++)
	{
		strcpy(p, argv[x]);
		for (y = 0; argv[y]; y++)
		{
			_putchar(p[y]);
		}
		_putchar('\n');
	}
	return (0);
}
