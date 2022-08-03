#include "dog.h"
/**
* init_dog -> initializes the variable struct dog
* @d: pointer to the struct name
* @name: dog name
* @age: age of the dog
* @owner: owner's name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
