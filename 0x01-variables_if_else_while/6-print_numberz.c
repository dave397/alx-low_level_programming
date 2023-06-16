#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print all single digit numbers using putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 10)
	{
		putchar(num % 10 + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
