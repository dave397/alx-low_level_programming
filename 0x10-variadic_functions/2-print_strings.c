#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string list
 * @separator: number separator
 * @n: length of argument
 * @...: remaining argument
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list arg;

	va_start(arg, n);

	while (i < n)
	{
		char *s = va_arg(arg, char *);

		if (i == (n - 1))
		{
			if (s == NULL)
				printf("%s\n", "(nil)");
			else
				printf("%s\n", s);
		}
		else
		{
			if (s == NULL)
				printf("%s\n", "(nil)");
			else
				if (separator == NULL)
					printf("%s", s);
				else
					printf("%s%s", s, separator);
		}
		i++;
	}

	va_end(arg);
}
