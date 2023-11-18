#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary
 * @n: number to print as binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		int bitC = 1 << 12;

		while (!(n & bitC))
			bitC >>= 1;

		while (bitC)
		{
			if ((!(n & bitC)) == 0)
				_putchar('1');
			else
				_putchar('0');

			bitC >>= 1;
		}
	}
}
