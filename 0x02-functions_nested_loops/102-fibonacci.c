#include <stdio.h>
/**
 * main - Entry point
 * Description - print first 50 fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start = 0;

	int curr = 1;

	int next;

	int count = 0;

	while (count < 50)
	{
		printf("%d, ", start);

		next = start + curr;
		start = curr;
		curr = next;

		count++;
	}
	printf("%s", "\n");

	return (0);
}
