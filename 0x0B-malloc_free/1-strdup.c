#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * _strdup -> returns a pointer to a copy of the given steing
  * @str: string parameter
  * Return: return a string
  */
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
		i++;

	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
