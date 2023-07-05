#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
