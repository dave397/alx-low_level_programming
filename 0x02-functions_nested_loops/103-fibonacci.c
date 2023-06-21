#include <stdio.h>
/**
 * main - Entry point
 * Description - print first 50 fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int start = 1;

	long int curr = 1;

	long int next;

	long int sum = 0;

	while (curr < 4000000)
	{
		if (curr % 2 == 0)
		{
			sum = sum + curr;
		}

		next = start + curr;
		start = curr;
		curr = next;

	}
	printf("%li", sum);
	printf("%s", "\n");

	return (0);
}
