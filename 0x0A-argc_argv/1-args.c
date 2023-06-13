#include "main.h"
#include <stdlib.h>

/**
 * main - prints number of arguments passed into main
 * @argc: number of arguments passed
 * @argv: array holding arguments passed
 *
 * Return: status code
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	_putchar((argc + '0') - 1);
	_putchar('\n');
	return (0);
}
