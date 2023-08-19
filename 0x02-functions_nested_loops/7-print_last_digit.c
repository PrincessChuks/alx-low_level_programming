#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: function parameter
 * Return: the last digit of the number will be returned
 */

int print_last_digit(int n)
{
	int o;

	o = n % 10;
	if (n < 0)
		o = -o;
	_putchar(o + '0');
	return (o);
}
