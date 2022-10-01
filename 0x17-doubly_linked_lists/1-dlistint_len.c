size_t dlistint_len(const dlistint_t *h)

/**
 * dlistint_len: count the number of element
 * @h: the current node
 * Return: the number of element
 */
{
	int count = 0; 
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}

