#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print all combinations of two digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* initialize counter one */
	int num_one;

	/* initialize counter two */
	int num_two;

	num_one = 0;
	num_two = 1;
	while (num_one < 10)
	{
		while (num_two < 10)
		{
			putchar(num_one % 10 + '0');
			putchar(num_two % 10 + '0');
			if (num_one == 8 && num_two == 9)
			{
				num_two++;
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			num_two++;
		}
		num_one++;
		num_two = num_one + 1;
	}
	putchar('\n');
	return (0);
}
