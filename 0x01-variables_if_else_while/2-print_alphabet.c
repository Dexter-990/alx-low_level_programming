#include <stdio.h>
/**
 * main - Prints out a-z using putchar and a loop
 *
 * Return: returns 0 if success, else nonzero
 */
int main(void)
{
	char c;

	for (c = 97; c != 123; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
