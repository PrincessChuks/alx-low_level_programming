#include "main.h"

/**
 * _isupper - function that checks uppercase characters
 * @c: funtion parameter
 * Return: return 1 if c is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
