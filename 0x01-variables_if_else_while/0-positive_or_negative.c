#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if number is positive
 *
 * Return: returns 0 if success, otherwise nonzero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
