#include "main.h"

/**
 * _strcat - concatenate string
 * @dest: first string
 * @src: second string
 * Return: character
 */


char *_strcat(char *dest, char *src)
{
	int count = 0;

	int i = 0;

	while (dest[i])
	{
		if (dest[i] == '\n')
			break;
		i++;
	}

	while (src[count])
	{
		dest[i + count] = src[count];
		count++;
	}

	src[count] = '\0';

	return (dest);
}
