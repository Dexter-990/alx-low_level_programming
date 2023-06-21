#include "function_pointers.h"

/**
 * print_name - prints any name using a call back function
 *
 * @name: name to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
