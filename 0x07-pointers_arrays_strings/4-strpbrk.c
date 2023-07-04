#include "main.h"

/**
 * _strpbrk - search string for any of a set of bytes
 * @s: string to search
 * @accept: search string
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (accept[i])
		{
			if (*s == accept[i])
			      return (s);
			i++
		}
		i = 0;
		s++;
	}
	return ('\0');
}
