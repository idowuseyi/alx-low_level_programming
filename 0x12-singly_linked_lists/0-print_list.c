#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * 
 *
 */

size_t print_list(const list_t *h)
{
	size_t *temp = h;

	while (temp != NULL)
	{
		printf("%d", temp->value);
		temp = temp->next;
	}
	printf("\n");
}
