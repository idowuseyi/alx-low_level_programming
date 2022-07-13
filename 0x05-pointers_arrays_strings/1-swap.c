#include "main.h"

/**
* swap_int-> swap integer values
* @a: the first pointer
* @b: is the second pointer
* Return: void
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
