#include "main.h"

/**
 * flip_bits - counts bits to change
 * @n: number one
 * @m: number two
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int cur;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = x >> i;
		if (cur & 1)
		count++;
	}

	return (count);
}
