#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string to be located
 * Return: located string, otherwise null
 */

char *_strstr(char *haystack, char *needle)
{
	int k = 0;

	while (needle[k] != '\0' && *haystack)
	{
		if (*haystack == needle[k])
		{
			return (haystack);
			k++;
		}
		haystack++;
	}

	return ('\0');
}
