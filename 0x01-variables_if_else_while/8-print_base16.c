#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print all numbers in base 16 '
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	char alpha;

	num = 0;
	alpha = 'a';

	while (num < 10)
	{
		putchar(num % 10 + '0');
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
