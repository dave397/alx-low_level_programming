#include "main.h"

/**
 * is_cmd - determines if a file is an executable command
 * @var: the var struct
 * @path: path to the file
 *
 * Return: 1 if true, 0 otherwise
 */
int is_cmd(global_t *var, char *path)
{
	struct stat st;

	(void)var;
	if (!path || stat(path, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}