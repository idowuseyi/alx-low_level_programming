#include "main.h"
/**
* _puts_recursion -> recursive function that prints string
* @s: string to be printed
* Return: based on condition
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);

	_puts_recursion(++s);
}
