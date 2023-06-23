#include "main.h"

/**
 * print_number - print the numbers inputed
 * @n: The character inputed
 * Return: void
 */

void print_number(int n)
{
	unsigned int cont = n;

	if (n < 0)
	{
		_putchar(45);
		cont = -cont;
	}
	if (cont / 10)
		print_number(cont / 10);
	_putchar(cont % 10 + '0');
}
