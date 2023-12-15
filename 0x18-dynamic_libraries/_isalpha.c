#include "main.h"
/**
 * _isalpha - 'Checks if input is an alphabet'
 * @c: The character to be checked
 *
 * Return: 1 if input is alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	char alpha_lower = 'a';
	char alpha_upper = 'A';

	while (alpha_lower <= 'z')
	{
		if (alpha_lower == c)
		{
			return (1);
		}
		alpha_lower++;
	}

	while (alpha_upper < 'Z')
	{
		if (alpha_upper == c)
		{
			return (1);
		}
		alpha_upper++;
	}
	return (0);
}
