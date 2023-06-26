#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}

	while ((count - 1) > -1)
	{
		_putchar(s[count]);
		count--;
	}

	_putchar('\n');

}
