#include "main.h"
/**
 * set_globals - initializes info_t struct
 * @info: struct address
 * @av: argument vector
 */

void set_globals(global_t *vars, char **av)
{
	int i = 0;

	vars->fname = av[0];
	if (vars->arg)
	{
		vars->av = strtok(vars->arg, " \t");
		if (!vars->av)
		{

			vars->av = malloc(sizeof(char *) * 2);
			if (vars->av)
			{
				vars->av[0] = _strdup(vars->arg);
				vars->av[1] = NULL;
			}
		}
		for (i = 0; vars->av && vars->av[i]; i++)
			;
		vars->argc = i;

		replace_alias(vars);
		replace_vars(vars);
	}
}
