#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print all alphabets in lowercase except q and e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
		{
			alpha++;
			continue;
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');

	return (0);
}
