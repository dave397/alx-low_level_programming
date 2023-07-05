#include "main.h"

/**
 * _pow_recursion - prints result of number power
 * @x: number
 * @y: power
 * Return: number power result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, --y));
}
