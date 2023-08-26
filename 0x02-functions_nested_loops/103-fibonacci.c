#include <stdio.h>

/**
 * main - main function
 * Return: return 0 to the funtion
 */

int main(void)
{
	int limit = 4000000;
	int first = 1;
	int second = 2;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = first + second;
		if (next % 2 == 0)
			sum = sum + next;
		first = second;
		second = next;
	}
	printf("%d\n", sum);
	return (0);
}
