#include "main.h"

/**
 * real_prime - check if a number is prime
 * @a: number
 * @i: iterator
 *
 * Return: 0 if @a is not prime and 1 if @a is prime
 */

int real_prime(int a, int i)
{
	if (a % i == 0)
	{
		if (i == a)
			return (1);
		else
			return (0);
	}
	if (i == a)
		return (1);
	return (real_prime(a, i + 1));
}

/**
 * is_prime_number - check if number is prime
 * @n: number
 * Return: 0 if not prime, otherwise 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, 2));
}
