#include "lists.h"
/**
 * print_dlistint - print a doubly linked list
 * @h: node to traberse with
 * Return: number of element
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	count += 1;
	h = h->next;
}
return (count);
}
