#include "main.h"

/**
 * print_most_numbers - Prints number one to nine except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		if (!(count == 2 || count == 4))
		{
			_putchar(count % 10 + '0');
		}
	}
	_putchar('\n');
}
