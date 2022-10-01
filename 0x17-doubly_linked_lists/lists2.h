#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>




/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistin5t_t;

size_t print_dlistint(const dlistint_t *h);size_t dlistint_len(const dlistint_t *h);




#endif /* LIST_H */