#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

struct node {
	char *str;
	unsigned int len;
	struct node *next;
};
typedef struct node list_t;
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
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
