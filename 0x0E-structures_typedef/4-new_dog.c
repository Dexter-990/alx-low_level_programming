#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates dog function
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: returns type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *d;
	unsigned int x;
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};

	d = malloc(sizeof(*d));
	
	if (d == 0)
	{
		free(d);
		return (NULL);
	}
	
	d->name = malloc(strlen(name) * sizeof(d->name));

	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (x = 0; name[x]; x++)
	{
		d->name[x] = name[x];
	}
	
	d->age = age;

	d->owner = malloc(strlen(owner) * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (x = 0; owner[x]; x++)
	{
		d->owner[x] = owner[x];
	}

	return (d);
}

