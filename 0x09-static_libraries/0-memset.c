#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: array
 * @b: bytes
 * @n: number to be replaced
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	}

	return (s);
}
