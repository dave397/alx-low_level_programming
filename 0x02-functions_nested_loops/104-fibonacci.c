#include <stdio.h>
/**
 * main - Entry point
 * Description - print first 98 fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int start = 1;

	long int curr = 1;

	long int next;

	int count = 0;

	while (count < 98)
	{
		if (count == 97)
		{
			printf("%li", curr);
		}
		else
		{
			printf("%li, ", curr);
		}

		next = start + curr;
		start = curr;
		curr = next;

		count++;
	}
	printf("%s", "\n");

	return (0);
}
