#include "main.h"

/**
 * print_alphabet_x10 - 'Prints alpahabet 10 times'
 */

void print_alphabet_x10(void)
{
	char alpha_lower = 'a';
	int count = 0;

	while (count < 10)
	{
		while (alpha_lower <= 'z')
		{
			_putchar(alpha_lower);
			alpha_lower++;
		}
		alpha_lower = 'a';
		_putchar('\n');
		count++;
	}
}
