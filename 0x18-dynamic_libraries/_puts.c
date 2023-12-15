#include "main.h"

/**
 * _puts - print string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');

}
