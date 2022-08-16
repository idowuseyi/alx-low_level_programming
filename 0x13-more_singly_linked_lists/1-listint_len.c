#include "lists.h"
/**
* listint_len -> returns the number of element in a list
* @h: pointer to the list
* Return: number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
