#include <stdio.h>

/**
 * main - prints fizz for multiples of 3, buzz
 * for multiple of 5 and fizzbuzz for multiple of 5 and 3
 * Return: 0 (Success)
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (count % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if (count % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("%s", "\n");
	return (0);
}
