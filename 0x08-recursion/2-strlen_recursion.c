#include "main.h"

/**
 * _strlen_recursion - prints string length
 * @s: string length to be printed
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);

}
