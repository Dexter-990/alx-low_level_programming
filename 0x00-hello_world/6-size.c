#include <stdio.h>

/**
 * main - Prints the size of various datatypes
 *
 * Return: returns 0
 */

int main(void)
{
	printf("Size of a char is: %lu byte(s)\n", sizeof(char));
	printf("Size of an int is: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int is: %li bytes(s)\n", sizeof(long int));
	printf("Size of a long long int is: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float is: %ld byte(s)\n", sizeof(float));
	return (0);
}
