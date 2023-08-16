#include "main.h"

/**
 * print_alphabet_x10 - code should print 10 times the alphabets in lower case
 *
 */

void print_alphabet_x10(void)
{
int i;

for (i = 0; i < 10; i++)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
