#include <stdio.h>
#include "main.h"
/**
 * sum_of_multiples - Print the sum of multiples
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int sum = 0;
	
	for (int count = 1; count < 1024; count++)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum = sum + count;
		}
	}

	printf("%d\n", sum);
	return (0);
}
