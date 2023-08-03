#include "main.h"

/**
 * clear_bit - set bit at index
 * @n: number
 * @index: index of the bit
 * Return: Success(1), otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = (~(1UL << index) & *n);

		return (1);
	}
}
