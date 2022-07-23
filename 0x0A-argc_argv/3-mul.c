#include "main.h"
/**
  * main - multiply 2 number passed into it
  * @argc: argument count
  * @argv: string array of arguments
  * Return:  an integer
  */
int main(int argc, char *argv[])
{
	int mul;
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
			return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = (i * j);
		printf("%d\n", mul);
	}
	return (0);
}
