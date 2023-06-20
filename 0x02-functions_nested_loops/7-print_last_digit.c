#include "main.h"
/**
 * print_last_digit - Print the last digit of an integer
 *
 * @n: The integer that is passed
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int final;

	final = n % 10;
	if (final >= 0)
	{
		_putchar(final + '0');
		return (final);
	}
	_putchar(final * -1 + '0');
	final = final * -1;
	return (final);
}
