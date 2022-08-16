#include "lists.h"
/**
* print_listint -> print an integer list
* @h: pointer to the struct
* Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	unsigned int cnode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnode++;
	}
	return (cnode);
}
