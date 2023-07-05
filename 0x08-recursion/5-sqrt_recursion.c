#include "main.h"

/**
 * _sqrt - real square root implementation
 * @n: number
 * @i: increment
 * Return: square root, otherwise -1
 */

int _sqrt(int n, int i)
{
	if (n < 0  || (i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);

	return (_sqrt(n, i + 1));

}

/**
 * _sqrt_recursion - real square root implementation
 * @n: number
 * Return: square root, otherwise -1
 */


int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
