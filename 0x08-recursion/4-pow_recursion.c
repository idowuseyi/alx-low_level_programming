#include "main.h"
/**
* _pow_recursion -> recursive function to calculate power
* @x: the number to raised to a power
* @y: power x is to be raised to
* Return: an integer based on the condition
*/

int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
