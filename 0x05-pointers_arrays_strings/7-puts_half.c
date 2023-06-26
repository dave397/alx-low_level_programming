#include "main.h"
#include <stdio.h>

/**
 * puts_half - from first character print every other character in string
 * @str: string to be splited and printed
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0;

	int start;

	while (str[count])
	{
		count++;
	}

	if (count % 2 != 0)
		start = (count - 1) / 2;
	else
		start = count / 2;

	while (start < count)
	{
		/*printf("%c", str[count]);*/
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');

}
