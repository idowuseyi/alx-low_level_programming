#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list -> print the data in a list
*
* @h: the pointer to the struct
* Return: number of elements in the list
*/

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
		printf("[%d] ", h->len);
		printf("%s", h->str);
		}
		h = h->next;
		count++;
		printf("\n");
	}
	return (count);
}

