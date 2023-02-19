#include <stdio.h>

/**
 * main - Prints the size of various datatypes
 *
 * Return: returns 0
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(signed int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(unsigned long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
