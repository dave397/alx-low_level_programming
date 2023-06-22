#include <stdlib.h>
#include <time.h>
/* more headers goes here */
#include <stdio.h>
/**
 * positive_or_negative - Entry Point
 * @n: character to enter
 * Description - 'check if number is zero, positive or negative'
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{

	/* your code goes here */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
