#include "main.h"

/**
 * _abs - the function _abs find the absolute integer of a number
 * @a: function parameter
 * Return: return 0 to the funtion after execution
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}

	return (0);
}

