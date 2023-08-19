#include "main.h"

/**
 * _isalpha - _isalpha is a function that checkd for alphabetic character
 * @c: funtion parameter
 * Return: return 0 if c is not a lowercase or uppercase letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
