#include "main.h"

/**
 * _ender - exit terminal
 * @code: exit command
 * Return: void
 */

void _ender(char *code)
{
	int e_code = 98;
	char *h = _search(code, " ");
	if (h != NULL)
	{
		e_code = _atoi(h);
		exit(e_code);
	}
}