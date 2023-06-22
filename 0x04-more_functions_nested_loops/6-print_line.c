#include "main.h"

/**
 * print_line - Prints line
 * @n: the number of times line is printed
 * Return: void
 */

void print_line(int n)
{
	int count;

	if (n < 1)
		_putchar('\n');
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
