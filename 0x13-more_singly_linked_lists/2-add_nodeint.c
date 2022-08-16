#include "lists.h"
/**
* add_nodeint - adds new nodes to the kist
* @head: the beggining of the node
* @n: integer value to add to the node
* Return: pointer to the new node added
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}
