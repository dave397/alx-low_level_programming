#include "main.h"

/**
 * convert_number - converter function, a clone of itoa
 * @num: number
 * @base: base
 * @flags: argument flags
 *
 * Return: string
 */
char *convert_number(long int num, int base, int flags)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (!(flags & 2) && num < 0)
	{
		n = -num;
		sign = '-';

	}
	array = flags & 1 ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do	{
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

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

	while (s[count]) count++;

	while (i < count)
	{
		if (s[i] == '-') sign = sign * -1;
		if (s[i] == '+') sign = sign * +1;
		if (s[i] == ';') break;
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
	if (entered) return ((int unsigned) digit * sign);
	return (0);
}