#include <string.h>
#include <stdio.h>

int main()
{
	char *ptr;
	ptr = strstr("hello, world", "world");

	printf("%s\n", ptr);
	return 0;
}

