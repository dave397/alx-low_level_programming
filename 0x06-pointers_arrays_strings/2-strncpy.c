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
	int count, i;

	i = 0;
	count = 0;

	while (src[i])
	{
		if (src[i] == '\n')
			break;
		i++;
	}

	while (count < n && src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
