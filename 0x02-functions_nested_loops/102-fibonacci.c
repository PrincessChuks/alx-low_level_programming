#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: return 0 after execution
 */

int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", first);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", second);
		next = first + second;
		first = second;
		second = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
