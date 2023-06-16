#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print all combinations of three digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_one;

	int num_two;

	int num_three;

	num_one = 0;
	num_two = 1;
	num_three = 2;
	while (num_one < 8)
	{
		while (num_two < 9)
		{
			while (num_three < 10)
			{
				putchar(num_one % 10 + '0');
				putchar(num_two % 10 + '0');
				putchar(num_three % 10 + '0');
				if
				(num_one == 7 && num_two == 8 && num_three == 9)
				{
					num_three++;
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				num_three++;
			}
			num_two++;
			num_three = num_two + 1;
		}
		num_one++;
		num_two = num_one + 1;
		num_three = num_two + 1;
	}
	putchar('\n');
	return (0);
}
