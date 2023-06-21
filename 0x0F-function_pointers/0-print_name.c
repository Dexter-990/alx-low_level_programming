#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints any name using a call back function
 *
 * @name: name to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!(name == 0) && !(f == 0))
		(*f)(name);
}
