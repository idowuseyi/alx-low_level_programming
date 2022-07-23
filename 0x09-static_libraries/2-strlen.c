#include "main.h"

/**
* _strlen-> print out the the lenght of a string
* @s: string to be counted
* Return: string lenght
*/

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
