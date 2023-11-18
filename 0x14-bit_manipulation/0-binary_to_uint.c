#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: binary to be converted
 * Return: binary decimal value, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	int count = 0;

	if (b == NULL)
		return (0);

	while (b[count] != '\0')
	{
		if (b[count] - '0' != 1 && b[count] - '0' != 0)
			return (0);

		sum = (sum << 1) + (b[count] - '0');
		count++;
	}

	return (sum);
}
