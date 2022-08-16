#include "lists.h"
/**
* add_nodeint_end -> add new integer node at the end of the list
* @head: current or beginning of yhe list
* @n: data to add
* Return: pointer to the new added element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (!(*head))
		{
			*head = new;
			return (new);
		}
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
