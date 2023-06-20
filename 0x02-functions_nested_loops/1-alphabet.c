#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - 'Prints all aphabet'
 */

void print_alphabet(void)
{
	char alpha_lower = 'a';

	while (alpha_lower <= 'z')
	{
		_putchar(alpha_lower);
		alpha_lower++;
	}

	_putchar('\n');
}
