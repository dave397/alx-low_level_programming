#include "main.h"

/**
 * _strlen(char *s) - count string length
 * @s: string to be counted
 * Return: integer i.e length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}

	return (count);
}
