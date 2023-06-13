#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * main - prints all argument vectors
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: status code
 */

int main(int argc, char *argv[])
{
	int x;
	__attribute__ ((unused)) int y;
	char p[1000];

	for (x = 0; x < argc; x++)
	{
		strcpy(p, argv[x]);
		for (y = 0; p[y]; y++)
		{
			putchar(p[y]);
		}
		putchar('\n');
	}
	return (0);
}
