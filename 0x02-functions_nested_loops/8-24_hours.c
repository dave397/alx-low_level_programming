#include "main.h"
/**
 * jack_bauer - Print every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int min = 0;
	int hr = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');

			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');

			_putchar('\n');

			min++;
		}
		min = 0;
		hr++;
	}
}
