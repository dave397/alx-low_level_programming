#include "main.h"

/**
 * _myexit - exits the shell
 * @var: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: exits with a given exit status
 *         (0) if var.argv[0] != "exit"
 */
int _myexit(global_t *var)
{
	int exitcheck;

	if (var->av[1])  /* If there is an exit arguement */
	{
		exitcheck = _atoi(var->av[1]);
		if (exitcheck == -1)
		{
			var->status = 2;
			return (1);
		}
		return (-2);
	}
	return (-2);
}

/**
 * _mycd - changes the current directory of the process
 * @var: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: Always 0
 */
int _mycd(global_t *var)
{
	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (!s)
		_puts("TODO: >>getcwd failure emsg here<<\n");
	if (!var->argv[1])
	{
		dir = _getenv(var, "HOME=");
		if (!dir)
			chdir_ret = /* TODO: what should this be? */
				chdir((dir = _getenv(var, "PWD=")) ? dir : "/");
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmp(var->argv[1], "-") == 0)
	{
		if (!_getenv(var, "OLDPWD="))
		{
			write(STDOUT_FILENO, s, 2);
			write(STDOUT_FILENO, '\n', 2);
			return (1);
		}
		_puts(_getenv(var, "OLDPWD=")), _putchar('\n');
		chdir_ret = /* TODO: what should this be? */
			chdir((dir = _getenv(var, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(var->argv[1]);
	if (chdir_ret == -1)
	{
		print_error(var, "can't cd to ");
		_eputs(var->argv[1]), _eputchar('\n');
	}
	else
	{
		_setenv(var, "OLDPWD", _getenv(var, "PWD="));
		_setenv(var, "PWD", getcwd(buffer, 1024));
	}
	return (0);
}

/**
 * _myhelp - changes the current directory of the process
 * @var: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: Always 0
 */
int _myhelp(global_t *var)
{
	char **arg_array;

	arg_array = var->av;
	write(STDOUT_FILENO, "help call works. Function not yet implemented \n", 2);
	if (0)
		write(STDOUT_FILENO, *arg_array, 2); /* temp att_unused workaround */
	return (0);
}
