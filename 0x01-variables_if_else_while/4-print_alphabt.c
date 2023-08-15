#include <stdio.h>

/**
 * main - main function
 *
 * Return : return 0 to function if successful
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
