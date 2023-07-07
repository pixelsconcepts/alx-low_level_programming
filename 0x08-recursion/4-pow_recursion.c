#include "main.h"

/**
 * _pow_recursion - checked the value of x raised to power y
 * @x: base integer
 * @y: exponent integer
 * return: result of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (!y)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
