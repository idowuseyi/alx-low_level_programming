#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog -> definition of dog structure.
* @name: name of the dog
* @age: the age of the dog
* @owner: the owner name of the dog
* Return: return void
*/
struct dog

{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
