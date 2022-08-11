#include "dog.h"

/**
* init_dog -> function that initializes struct dog
* @d: pointer to structure name
* @name: the name of the dog
* @age: the dog age
* @owner: the nameof the owneer
* Return: return nothing
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
