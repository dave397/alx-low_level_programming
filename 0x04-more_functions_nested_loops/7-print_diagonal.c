#include "main.h"

/**
 * print_diagonal - print \ in diagonal
 * @n: the lines to print
 * Return: void
 */

void print_diagonal(int n)
{
	int count, start;

	int end = n - 1;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (start = 0; start < n; start++)
		{
			for (count = 0; count < n - end; count++)
			{
				if (count == (n - end - 1))
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
			count = 0;
			end--;
		}
	}
}
