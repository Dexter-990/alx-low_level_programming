#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - performs simple arithematic operations.
 *
 * @argc: size of argv
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*f)(int, int) = get_op_func(argv[2]);
	
	if (f == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((strcmp(argv[2], "/") == 0 || (strcmp(argv[2], "%") == 0))
			&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
