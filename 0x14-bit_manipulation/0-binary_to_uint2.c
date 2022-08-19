#include "main.h"
/**
* binary_to_uint -> convert binary to decimal
* @b: the input char
* Return: converted unsigned int value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
	{
	return (0);
	}
	else
	{
	if ('a' <= b[i] && b[i] <= 'z')
	{
	printf("0\n");
	return (0);
	}
	else
	{
	while (b[i] == '0' || b[i] == '1')
	{
	val <<= 1;
	val += b[i] - '0';
	i++;
	}
	}
	return (val);
	}
}
