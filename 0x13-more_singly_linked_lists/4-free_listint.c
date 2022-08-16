#include "lists.h"
/**
* free_listint -> free the allocated memory for the list
* @head: beginning of the lost or the current node
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
