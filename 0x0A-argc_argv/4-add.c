#include "main.h"
/**
  * main - print addition of arguments passed into it
  * @argc: argument count
  * @argv: string array of arguments
  * Return: add the arguments passed it
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char a[10] = {'%', '&', '!', '#', '$', '/', '=', '>', 'e'};

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (atoi(argv[i]) == a[10])

			{
				printf("Error\n");
				return (1);
			}
			else
			{
			sum += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return(0);
}
