#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the amount of arguments passed into argc
* @argc: argument count
* Return: 0 success
*/

int main(int argc, char* argv[])
{
	int i;
	int sum = 0;
	printf("argc = %d\n", argc);
	printf("See what's inside argv[]\n");
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
		printf("Total = %d\n", sum);
	}

	return (0);
}
