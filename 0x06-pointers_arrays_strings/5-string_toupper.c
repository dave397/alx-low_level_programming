#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @n: string to convert
 * Return: converted string
 */

char *string_toupper(char *n)
{
	int c = 0;

	while (n[c])
	{
		if (n[c] >= 'a' && n[c] <= 'z')
		{
			n[c] = n[c] - 32;
		}
		c++;
	}

	return (n);
}

