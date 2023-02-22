#include "main.h"

/**
 * print_alphabet - contains print_alphabet() function
 *
 * Return: returns success
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}

