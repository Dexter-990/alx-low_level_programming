#include "dog.h"
#include <stdlib.h>

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

	d->name = name;
	d->age = age;
	d->owner = owner;
	if (d)
	{
		return (d);
	}
	else
	{
		free(d);
		return (NULL);
	}

}

