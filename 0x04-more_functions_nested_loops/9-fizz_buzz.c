#include <stdio.h>

/**
 * main - fizzbuzz program to flag multiples of 3, 5 and 3 or 5
 * Return: return 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i < 101 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else if (i % 5 == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
