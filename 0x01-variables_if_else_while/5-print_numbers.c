#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print all single digit numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
