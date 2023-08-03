#include "main.h"

/**
 * set_bit - set bit at index
 * @n: number
 * @index: index of the bit
 * Return: value of the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = ((1UL << index) | *n);

		return (1);
	}
}
