#include "main.h"

/**
 * simple_shell - main shell
 * @var: global struct
 * @av: argument array
 *
 * Return: 0 on success, 1 on error, or error code
 */
int simple_shell(global_t *var, char **av)
{
	ssize_t r = 0;
	int builtin_ret = 0;
    char *buffer;
	size_t buffer_size = 0;

	while (r != -1 && builtin_ret != -2)
	{
		flush_global(var);
		if (isatty(STDIN_FILENO) && var->readfd <= 2)
			write(STDOUT_FILENO, "$ ", 2);
		fflush(stdout);

		r = getline(&buffer, &buffer_size, stdin);
		if (r != -1)
		{
			set_globals(var, av);
			// builtin_ret = find_builtin(info);
			// if (builtin_ret == -1)
			find_cmd(var);
		}
		else if (isatty(STDIN_FILENO) && var->readfd <= 2)
			write(STDOUT_FILENO, '\n', 2);
		free_globals(var, 0);
	}
	// write_history(var);
	free_globals(var, 1);
	if (!isatty(STDIN_FILENO) && var->readfd <= 2 && var->status)
		error_exit("Error: ");
	if (builtin_ret == -2)
	{
		error_exit("ew err");
	}
	return (builtin_ret);
}

/**
 * find_builtin - finds a builtin command
 * @info: the parameter & return info struct
 *
 * Return: -1 if builtin not found,
 *			0 if builtin executed successfully,
 *			1 if builtin found but not successful,
 *			-2 if builtin signals exit()
 */
int find_builtin(global_t *vars)
{
	int i, built_in_ret = -1;
	inbuilt_t builtintbl[] = {
		{NULL, NULL}
	};

	for (i = 0; builtintbl[i].name; i++)
		if (_strcmp(vars->av[0], builtintbl[i].name) == 0)
		{
			vars->line_count++;
			built_in_ret = builtintbl[i].fn(vars);
			break;
		}
	return (built_in_ret);
}

/**
 * find_cmd - finds a command in PATH
 * @info: the parameter & return info struct
 *
 * Return: void
 */
void find_cmd(global_t *var)
{
	char *path = NULL;
	int i, k;

	var->path = var->av[0];
	if (var->linecount_flag == 1)
	{
		var->line_count++;
		var->linecount_flag = 0;
	}
	for (i = 0, k = 0; var->arg[i]; i++)
		if (!is_delim(var->arg[i], " \t\n"))
			k++;
	if (!k)
		return;

	path = find_path(var, _getenv(var, "PATH="), var->av[0]);
	if (path)
	{
		var->path = path;
		fork_cmd(var);
	}
	else
	{
		if ((isatty(STDIN_FILENO) && var->readfd <= 2 || _getenv(var, "PATH=")
			|| var->av[0][0] == '/') && is_cmd(var, var->av[0]))
			fork_cmd(var);
		else if (*(var->arg) != '\n')
		{
			error_exit("Error: not found\n");
		}
	}
}

/**
 * fork_cmd - forks a an exec thread to run cmd
 * @info: the parameter & return info struct
 *
 * Return: void
 */
void fork_cmd(global_t *var)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		/* TODO: PUT ERROR FUNCTION */
		perror("Error:");
		return;
	}
	if (child_pid == 0)
	{
		if (execve(var->path, var->av, get_environ(var)) == -1)
		{
			free_globals(var, 1);
			if (errno == EACCES)
				error_exit('Error: ');
			exit(1);
		}
		/* TODO: PUT ERROR FUNCTION */
	}
	else
	{
		wait(&(var->status));
		if (WIFEXITED(var->status))
		{
			var->status = WEXITSTATUS(var->status);
			if (var->status == 126)
				print_error(info, "Permission denied\n");
		}
	}
}
