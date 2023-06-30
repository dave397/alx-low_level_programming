#include "main.h"

/**
 * _strncpy - copy string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: character
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '/0';
		i++;
	}
	return (dest);
}
