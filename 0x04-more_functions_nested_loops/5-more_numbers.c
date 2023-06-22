#include "main.h"

/**
 * more_numbers - Prints number 1-14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int count;

	int c_two;

	for (count = 0; count < 10; count++)
	{
		for (c_two = 0; c_two <= 14; c_two++)
		{
			if (c_two > 10)
			{
				_putchar(c_two / 10 + '0');
			}
			_putchar(c_two % 10 + '0');
		}
		c_two = 0;
		_putchar('\n');
	}
}
