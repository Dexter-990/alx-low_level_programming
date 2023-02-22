#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: staring number to be counted from
 */

void print_to_98(int n)
{
	int *ptr_n;
	ptr_n = &n;
	if (n < 98)
	{

		for (n = *ptr_n; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		for (n = *ptr_n; n > 97; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		putchar('\n');
	}
	else
	{
		printf("%d\n", n);
	}

}
int main()
{
	print_to_98(11);
	return (0);
}
