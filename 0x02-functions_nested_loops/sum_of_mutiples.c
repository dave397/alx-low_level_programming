#include "main.h"

/**
 * sum_of_multiples - calaculates the sum of multiple
 * @c: the limit character passed
 * Return: sum
 */

int sum_of_multiples(int c)
{
	int holder;

	int sum = 0;

	for (holder = 1; holder < c; holder++)
	{
		if (holder % 3 == 0 || holder % 5 == 0)
		{
			sum = sum + holder;
		}
	}

	return (sum);
}
