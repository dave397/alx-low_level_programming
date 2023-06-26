#include "main.h"

/**
 * _strcpy - copy string to array
 * @dest: copy address
 * @src: string to copy
 * Return: copied dtring
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count])
	{
		count++;
	}
	while (i < count)
	{
		dest[i] = src[i];
		i++;
	}

	dest[count] = '\0';

	return (dest);
}
