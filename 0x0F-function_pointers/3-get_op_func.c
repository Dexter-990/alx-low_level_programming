#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 *
 * @s: operator passed as argument to the program
 * Return: returns a pointer to the function
 * that corresponds to the operator given as a parameter
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	printf("%s\n", s);
	i = 0;
	while (i < 6)
	{
		if (strncmp(ops[i].op, s, 1) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);

}