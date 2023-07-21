#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print number list
 * @separator: number separator
 * @n: length of argument
 * @...: remaining argument
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list arg;

	va_start(arg, n);

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(arg, int));
		}
		else
		{
			if (separator == NULL)
				printf("%d", va_arg(arg, int));
			else
				printf("%d%s", va_arg(arg, int), separator);
		}
		i++;
	}

	va_end(arg);
}
