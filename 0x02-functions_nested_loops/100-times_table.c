#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the times table
 * @n: table multiplication to carry out
 * Return: void
 */
void print_times_table(int n)
{
	int outer, inner;

	if (n <= 15 && n >= 0)
	{
		for (outer = 0; outer <= n; outer++)
		{
			for (inner = 0; inner <= n; inner++)
			{
				printf("%d", outer * inner);
				if (inner != n)
				{
					if (outer * inner + outer >= 100)
					{
						printf("%s", ", ");
					}
					else if (outer * inner + outer >= 10)
					{
						printf("%s", ",  ");
					}
					else
					{
						printf("%s", ",   ");
					}
				}
			}
			printf("%s", "\n");
			inner = 0;
		}
	}
}
