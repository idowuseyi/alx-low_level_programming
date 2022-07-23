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
	int sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if ((argv[i])!<= 2147483647 && argv[i] !>= -2147483648)
			{
				printf("Error\n");
					return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
			printf("%d\n", sum);
		}
	}
	return (sum);
}
