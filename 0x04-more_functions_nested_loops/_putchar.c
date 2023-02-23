#include <unistd.h>
#include <string.h>

int _putchar(char c)
{
	int len = strlen(msg);
	int a;

	a = write(1, c, len);
	return (a);
}
