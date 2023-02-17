#include <stdio.h>

/**
 * main - Prints the size of various datatypes
 *
 * Return: returns 0
 */

int main(void)
{
	printf("Size of a char is: %lubyte(s)\n", sizeof(char));
	printf("Size of an int is: %lubyte(s)\n", sizeof(int));
	printf("Size of a long int is: %libytes(s)\n", sizeof(long int));
	printf("Size of a long long int is: %libyte(s)\n", sizeof(long long int));
	printf("Size of a float is: %ldbyte(s)\n", sizeof(float));
	return (0);
}
