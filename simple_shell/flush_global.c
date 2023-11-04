#include "main.h"

/**
 * flush_globals - reset info_t struct
 * @info: struct address
 */
void flush_globals(global_t *info)
{
	info->arg = NULL;
	info->av = NULL;
	info->path = NULL;
	info->argc = 0;
}

/**
 * free_globals - frees info_t struct fields
 * @info: struct address
 * @all: true if freeing all fields
 */

void free_globals(global_t *var, int all)
{
	ffree(var->av);
	var->av = NULL;
	var->path = NULL;
	if (all)
	{
		if (var->env)
			free_list(&(var->env));
		ffree(var->environ);
			var->environ = NULL;
		if (var->readfd > 2)
			close(var->readfd);
		fflush(stdout);
	}
}
