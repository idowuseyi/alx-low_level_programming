#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* list_len -> print the data in a list
*
* @h: the pointer to the struct
* Return: number of elements in the list
*/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);

}

