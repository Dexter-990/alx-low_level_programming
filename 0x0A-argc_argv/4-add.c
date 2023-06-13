#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - multiples two numbers
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: status code
 */

int main(int argc, char **argv)
{
	int x, y;
	int res = 0;

	if (argc < 3)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{

				if (!(isdigit(argv[x][y])))
				{
					printf("Error\n");
					return (1);
				}

			}
			res += atoi(argv[x]);

		}
		printf("%d\n", res);
	}
	return (0);
}



