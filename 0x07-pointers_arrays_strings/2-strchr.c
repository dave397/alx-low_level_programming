#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates character in a string
 * @s: character
 * @c: string to locate
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
	{
		return (NULL);
	}

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (NULL);
}
