#include "main.h"

/**
 * main - contains print_alphabet() function
 *
 * Return: returns success
 */

int main(void)
{
/**
 * print_alphabet - prints all alphabets in lower case
 *
 * Return: returns null
 */
	
	void print_alphabet(void);
	print_alphabet();
	return (0);
}


void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return;
}

