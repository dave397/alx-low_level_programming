#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int outer, inner;

	for (outer = 0; outer < 10; outer++)
	{
		for (inner = 0; inner < 10; inner++)
		{
			if (outer * inner >= 10)
			{
				_putchar(outer * inner / 10 + '0');
				_putchar(outer * inner % 10 + '0');
				if (inner != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(outer * inner % 10 + '0');
				if (outer * inner + outer >= 10 && inner != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					if (inner != 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
		inner = 0;
	}

}
