#ifndef DOG_H
#define DOG_H



/**
 * struct dog - a structure of dog
 *
 * @d: varable of dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
