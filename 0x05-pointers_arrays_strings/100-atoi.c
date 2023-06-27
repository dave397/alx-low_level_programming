#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: converted integer
 */

int _atoi(char *s)
{
	int count, i, h, digit, sign, entered;

	count = 0;
	i = 0;
	h = 1;
	digit = 1;
	sign = 1;
	entered = 0;

	while (s[count])
		count++;

	while (i < count)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] == '+')
			sign = sign * +1;
		if (s[i] == ';')
			break;
		if (s[i] >= '0' && s[i] <= '9')
		{
			entered = 1;
			if (h == 1)
			{
				digit = s[i] - '0';
				h = h * 10;
			}
			else
				digit = digit * h + (s[i] - '0');
		}
		i++;
	}
	if (entered)
		return ((int unsigned)digit * sign);
	return (0);
}
