#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * main - multiples two numbers
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: status code
 */

int main(int argc, char *argv[])
{

	char s[] = "Error";
	int x;
	char y[100], z[100];
	int res;
	(void)argv;

	if (argc < 3)
	{
		for (x = 0; s[x]; x++)
			_putchar(s[x]);
		_putchar('\n');
	}
	else
	{
		strcpy(y, argv[1]);
		strcpy(z, argv[2]);
		res = atoi(y) * atoi(z);
		printf("%d\n", res);
	}
	return (0);
}
