#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
/** printf - prints what's about to happen */
	i = 0;
/** int i initialized to 0 */
	while (i < 10)
	{
		putchar(i);
	}
/** putchar print a value each time */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
