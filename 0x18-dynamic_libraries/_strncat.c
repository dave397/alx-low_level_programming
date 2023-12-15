#include "main.h"

/**
 * _strncat - concatenate string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: character
 */


char *_strncat(char *dest, char *src, int n)
{
	int count, i;

	i = 0;
	count = 0;

	while (dest[i])
	{
		if (dest[i] == '\n')
			break;
		i++;
	}

	while (count < n && src[count])
	{
		dest[i + count] = src[count];
		count++;
	}
	return (dest);
}
