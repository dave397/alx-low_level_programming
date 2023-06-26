#include "main.h"
#include <stdio.h>

/**
 * puts2 - from first character print every other character in string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	int i  = 0;

	while (str[count])
	{
		count++;
	}
	while (i < count)
	{
		/*printf("%c", str[count]);*/
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');

}
