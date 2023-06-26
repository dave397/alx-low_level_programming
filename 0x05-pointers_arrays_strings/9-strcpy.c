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
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
