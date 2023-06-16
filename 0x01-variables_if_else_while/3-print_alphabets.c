#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Print all alphabets in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* initialize alphabet in lowercase */
	char alpha_lower;

	/* initialize alphabet in uppercase */
	char alpha_upper;

	alpha_lower = 'a';
	alpha_upper = 'A';

	/* loop through from a - z */
	while (alpha_lower <= 'z')
	{
		/* print lowercase alphabet */
		putchar(alpha_lower);
		/* increment lowercase character */
		alpha_lower++;
	}

	/* loop through from A - Z */
	while (alpha_upper <= 'Z')
	{
		/* print uppercase alphabet */
		putchar(alpha_upper);
		/* increment uppercase character */
		alpha_upper++;
	}
	/* add new line */
	putchar('\n');

	return (0);
}
