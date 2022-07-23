#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* main - print its executable file name
* @argc: argument count
* @argv: argument string array
* Return: the executable file name
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
