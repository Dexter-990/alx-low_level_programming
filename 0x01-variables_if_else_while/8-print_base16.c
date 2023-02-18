#include <stdio.h>

/**
 * main - prints hexadecimals
 *
 * Return: returns 0 for success
 */

int main(void)
{
	char i, x;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (x = 97; x < 103; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
