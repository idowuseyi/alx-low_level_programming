#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog -> definition of dog structure.
* struct dog_t -> type definition of struct
* @name: name of the dog
* @age: the age of the dog
* @owner: the owner name of the dog
* Return: return void
*/
typedef struct dog

{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#include <stdio.h>
#include <stdlib.h>
#endif
