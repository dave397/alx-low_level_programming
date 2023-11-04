#include "main.h"

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: pointer
 */

char *_strdup(char *str)
{
	size_t len = _countstr(str) + 1;
	char *duplicate = (char *) malloc(len);

	if (duplicate == NULL)
	{
		
	}
	else
	{
		_strcpy(duplicate, str);
	}

	return duplicate;
}

/**
 * _strcpy - duplicate string
 * @dest: container to be copied too
 * @src: string to be copied
 * Return: pointer to container
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	dest[count] = '\0';
	return (dest);
}

/**
 * _strncmp - compare two strings up to n characters
 * @s1: The first string to compare
 * @s2: The second string to compare
 * @n: The maximum number of characters to compare
 * Return: 0 if strings are equal, a positive value if s1 >
 * s2, and a negative value if s1 < s2
 */
int _strncmp(char *s1, char *s2, size_t n)
{
	size_t i = 0;
	for (; i < n; i++)
	{
		if (s1[i] != s2[i])
		{
			return (int) (unsigned char) s1[i] -
			       (int) (unsigned char) s2[i];
		}
		if (s1[i] == '\0')
		{
			return 0;
		}
	}
	return 0;
}

/**
 * strtok - tokenize string
 * @str: str to separate
 * @d: delimeter
 * Return: current token, otherwise NULL
 */

char **strtok(char *str, char *d)
{
	int i, j, k, m, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (i = 0; str[i] != '\0'; i++)
		if (!is_delim(str[i], d) && (is_delim(str[i + 1], d) || !str[i + 1]))
			numwords++;

	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, j = 0; j < numwords; j++)
	{
		while (is_delim(str[i], d))
			i++;
		k = 0;
		while (!is_delim(str[i + k], d) && str[i + k])
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	return (s);
}

/**
 * _search - seaech for string
 * @holder: parent string
 * @find: string to find
 * Return: pointer to begining of string, otherwise NULL
 */

char *_search(char *holder, char *find)
{
	int count = 0;

	while (holder[count])
	{
		int count2 = 0;
		int icount = count;
		while (holder[count] == find[count2])
		{
			count++;
			count2++;
		}

		if (find[count2] == '\0')
		{
			return (char *) &holder[icount];
		}
		count = icount + 1;
	}

	return (NULL);
}

