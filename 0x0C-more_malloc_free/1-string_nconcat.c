#include "main.h"
/**
* string_nconcat -> function that concatenates two strings
* @s1: first string parameter
* @s2: second string parameter
* @n: integer string parameter
* Return: returned the concatenate
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	concat = (char *)malloc(sizeof(char) * len + 1);
	if (concat == NULL)
	return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';
	return (concat);
}
