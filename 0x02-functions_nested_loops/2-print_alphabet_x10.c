#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i, x
		;
	for (i = 1; i < 11; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
