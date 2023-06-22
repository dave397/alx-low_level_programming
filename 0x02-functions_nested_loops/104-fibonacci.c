#include <stdio.h>
/**
 * main - Entry point
 * Description - print first 98 fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int start, curr = 1;

	unsigned int next;

	int count = 0;

	while (count < 98)
	{
		if (curr >= 1000000000)
		{
			long int upper = curr / 1000000000;
			long int lower = curr % 1000000000;

			if (count == 97)
				printf("%li", upper, lower);
			else
				printf("%li, ", upper, lower);
		}
		else
		{
			if (count == 97)
				printf("%u", curr);
			else
				printf("%u, ", curr);
		}
		next = start + curr;
		start = curr;
		curr = next;

		count++;
	}
	printf("%s", "\n");

	return (0);
}
