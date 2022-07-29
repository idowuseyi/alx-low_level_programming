#include "main.h"
/**
* _calloc -> that allocates memory for an array, using malloc
* @nmemb: array parameter
* @size: sizeof the array
* Return: a pointer to the allocated memory with calloc
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filter;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	filter = mem;
	for (index = 0; index < (size * nmemb); index++)
	{
		filter[index] = '\0';
	}
	return (mem);
}
