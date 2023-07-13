#include "main.h"

/**
 * _isdigit - Checks if a number is a digit
 * @c: digit to check
 * Return: 1 if it is a digit, otherise 0
 */

int _isdigit(int c)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		if ((count % 10 + '0') == c)
		{
			return (1);
		}
	}

	return (0);
}
