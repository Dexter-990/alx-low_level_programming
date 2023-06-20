#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 */

/**
 * struct dog - a structure of dog
 *
 * @d: varable of dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
