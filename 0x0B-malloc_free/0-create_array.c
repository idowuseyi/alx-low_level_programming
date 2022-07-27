#include "main.h"
/**
  * create_array -> create an array of char and initializes with a char
  * @size: size of the array
  * @c: character array
  * Return: return a pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);

}
