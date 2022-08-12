#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node -> add a new node to the data in a list
*
* @head: the pointer to the beginning of the list
* @str: the string to add to the list
* Return: the new list added to the element
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	/* new->next = *head */
	/* *head = new; */

	while (str[len])
	{
		len++;
	}
	new->len = len;
	if (*head == NULL)
	{
		*head = temp = new;
	}
	else
	{
		temp->next = new;
		temp = new;
	}
	/* printf("[%d] %s", len,new->str); */
	/* new = new->next; */
	/* printf("\n"); */
	return (temp);
}
