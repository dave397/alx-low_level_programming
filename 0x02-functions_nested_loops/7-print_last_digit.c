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
	if (n >= 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	_putchar((n * -1) % 10 + '0');
	final = ((n * -1) % 10);
	return final;
}
