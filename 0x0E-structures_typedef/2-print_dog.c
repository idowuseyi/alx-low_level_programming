#include <dog.h>
/**
* print_dog -> print dog
* @d: structure parameter
* Return: return nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
	if (name == NULL)
	{
	printf("(nil)");
	else
	{
	printf("%s", name);
	}
	if (age == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%f", age);
	}
	if (owner == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s\n", owner);
	}
	printf("%s \n %f \n %s\n", name, age, owner);
}
