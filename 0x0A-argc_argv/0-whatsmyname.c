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
	do{
		printf("%s\n", argv[0]);
	}while (argc > 1);
	argc -= argc;

	return (0);
}
