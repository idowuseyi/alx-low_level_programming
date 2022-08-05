#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all -> sum all argument passed into it
* @n: constant int argument parameter
* Return: return sum of all argument
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	int i;

	va_list args;

	va_start(args, n);
/*
*	if (n == 0)
*	{
*	return (0);
*	}
*/
	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
