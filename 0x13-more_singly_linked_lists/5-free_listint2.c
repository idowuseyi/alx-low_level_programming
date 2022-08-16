#include "lists.h"
/**
* free_listint2 -> set head to null
* @head: pointer to the current node
*/
void free_listint2(listint_t **head)
{
	listint_t *nnode, *cnode;

	cnode = *head;
	while (cnode)
	{
		nnode = cnode->next;
		free(cnode);
		cnode = nnode;
	}
	*head = NULL;
}
