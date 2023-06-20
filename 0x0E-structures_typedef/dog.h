#ifndef DOG_H
#define DOG_H



/**
 * struct dog - a structure of dog
 *
 * @d: varable of dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} d;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
