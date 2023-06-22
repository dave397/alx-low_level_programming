#include "main.h"

/**
 * print_square - Print a aquare
 * @size: value for size of square
 * Return: void
 */

void print_square(int size)
{
	int count, start;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (start = 0; start < size; start++)
		{
			for (count = 0; count < size; count++)
			{
				_putchar('#');
			}
			count = 0;
			_putchar('\n');
		}
	}
}
