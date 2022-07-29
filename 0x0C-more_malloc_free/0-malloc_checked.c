#include "main.h"
/**
* malloc_checked -> function that allocate memory
* @b: parameter argument
* Return: a pointer to the memory address
*
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
