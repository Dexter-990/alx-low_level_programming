#include <stdio.h>

/**
 * main - prints alphabet in upper and lower case using putchar
 *
 * Return: returns 0 if success, else nonzero
 */
int main(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		putchar(c);
		c++;
	}
	c = 65;
	while (c < 91)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
