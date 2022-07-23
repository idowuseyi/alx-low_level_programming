#include "main.h"

/**
* main - print all the arguments passed into it
* @argc: argument count
* @argv: string array of arguments
* Return: all the arguments passed it
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
