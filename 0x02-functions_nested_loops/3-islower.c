#include <stdio.h>
#include "main.h"

/**
 *_islower - 'Checks if input is lowercase'
 *@c: The character to be checked
 *
 * Return: 1 if input is lowercase 0 otherwise
 */

int _islower(int c)
{
	char alpha_lower = 'a';

	while (alpha_lower <= 'z')
	{
		if (c == alpha_lower)
		{
			return (1);
		}
		alpha_lower++;
	}
	return (0);
}
