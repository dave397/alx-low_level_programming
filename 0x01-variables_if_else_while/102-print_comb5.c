#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Printing all possible combinations of two two-digit numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int track = 0;
	int holder = 0;
	int num2 = 1;

	while (num < 10)
	{
		while (num2 < 100)
		{
			putchar(num % 10 + '0');
			putchar(track % 10  + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');
			if (
			!(num % 10 + '0' == '9' && track % 10  + '0' == '8' &&
			num2 / 10 + '0' == '9' && num2 % 10 + '0' == '9')
			)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		if (track >= 9)
		{
			holder = holder + 10;
			num++;
			track = 0;
			num2 = holder + 1;
		}
		else
		{
			track = track + 1;
			num2 = holder + track + 1;
		}
	}
	putchar('\n');
	return (0);
}
