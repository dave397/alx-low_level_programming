#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: chessboard dimension
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	int c = 0;

	while (i < 8)
	{
		while (c < 8)
		{
			_putchar(a[i][c]);
			c++;
		}
		_putchar('\n');
		c = 0;
		i++;
	}
}
