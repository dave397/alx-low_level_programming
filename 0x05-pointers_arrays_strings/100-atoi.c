#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: converted integer
 */

int _atoi(char *s)
{
	int count, i, h, digit, sign;

	count = 0;
	i = 0;
	h = 1;
	digit = 1;
	sign = 1;

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
	return (digit * sign);
}
