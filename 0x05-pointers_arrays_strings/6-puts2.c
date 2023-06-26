#include "main.h"

/**
 * puts2 - from first character print every other character in string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count = count + 2;
	}
	_putchar('\n');

}
