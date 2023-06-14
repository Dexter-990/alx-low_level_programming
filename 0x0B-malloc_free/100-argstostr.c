#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: size of the arguments
 * @av: array of pointers to each string
 *
 * Return: pointer to new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr_c;
	int x = 0, y = 0, count = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y] != '\0')
		{
			count++;
			y++;
		}
		x++;
	}

	ptr_c = malloc(sizeof(char) * (count + ac - 2));

	if (ptr_c == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			ptr_c[c] = av[x][y];
			c += 1;
		}
		ptr_c[c] = '\n';
		c += 1;
	}

	return (ptr_c);
}


