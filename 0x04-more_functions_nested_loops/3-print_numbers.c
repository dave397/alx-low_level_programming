#include "main.h"

/**
 * print_numbers - Prints number one to nine
 * Return: void
 */
void print_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		_putchar(count % 10 + '0');
	}
	_putchar('\n');
}
