#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to check
 * Return: 1 if is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (upper == c)
		{
			return (1);
		}
	}
	return (0);
}
