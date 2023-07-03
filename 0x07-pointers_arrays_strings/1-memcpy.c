#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: array
 * @src: array two
 * @n: number to be copied
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
