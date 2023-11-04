#include "main.h"

/**
 * is_chain - test if current char in buffer is a chain delimeter
 * @var: the parameter struct
 * @buf: the char buffer
 * @p: address of current position in buf
 *
 * Return: 1 if chain delimeter, 0 otherwise
 */
int is_chain(global_t *var, char *buf, size_t *p)
{
	size_t j = *p;

	if (buf[j] == '|' && buf[j + 1] == '|')
	{
		buf[j] = 0;
		j++;
		var->cmd_buf_type = 1;
	}
	else if (buf[j] == '&' && buf[j + 1] == '&')
	{
		buf[j] = 0;
		j++;
		var->cmd_buf_type = 2;
	}
	else if (buf[j] == ';') /* found end of this command */
	{
		buf[j] = 0; /* replace semicolon with null */
		var->cmd_buf_type = 3;
	}
	else
		return (0);
	*p = j;
	return (1);
}

/**
 * check_chain - checks we should continue chaining based on last status
 * @var: the parameter struct
 * @buf: the char buffer
 * @p: address of current position in buf
 * @i: starting position in buf
 * @len: length of buf
 *
 * Return: Void
 */
void check_chain(global_t *var, char *buf, size_t *p, size_t i, size_t len)
{
	size_t j = *p;

	if (var->cmd_buf_type == 2)
	{
		if (var->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	if (var->cmd_buf_type == 1)
	{
		if (!var->status)
		{
			buf[i] = 0;
			j = len;
		}
	}

	*p = j;
}

/**
 * replace_alias - replaces an aliases in the tokenized string
 * @var: the parameter struct
 *
 * Return: 1 if replaced, 0 otherwise
 */
int replace_alias(global_t *var)
{
	int i;
	list_t *node;
	char *p;

	for (i = 0; i < 10; i++)
	{
		node = node_starts_with(var->alias, var->av[0], '=');
		if (!node)
			return (0);
		free(var->av[0]);
		p = _strchr(node->str, '=');
		if (!p)
			return (0);
		p = _strdup(p + 1);
		if (!p)
			return (0);
		var->av[0] = p;
	}
	return (1);
}

/**
 * replace_vars - replaces vars in the tokenized string
 * @var: the parameter struct
 *
 * Return: 1 if replaced, 0 otherwise
 */
int replace_vars(global_t *var)
{
	int i = 0;
	list_t *node;

	for (i = 0; var->av[i]; i++)
	{
		if (var->av[i][0] != '$' || !var->av[i][1])
			continue;

		if (!_strcmp(var->av[i], "$?"))
		{
			replace_string(&(var->av[i]),
				_strdup(convert_number(var->status, 10, 0)));
			continue;
		}
		if (!_strcmp(var->av[i], "$$"))
		{
			replace_string(&(var->av[i]),
				_strdup(convert_number(getpid(), 10, 0)));
			continue;
		}
		node = node_starts_with(var->env, &var->av[i][1], '=');
		if (node)
		{
			replace_string(&(var->av[i]),
				_strdup(_strchr(node->str, '=') + 1));
			continue;
		}
		replace_string(&var->av[i], _strdup(""));

	}
	return (0);
}

/**
 * replace_string - replaces string
 * @old: address of old string
 * @new: new string
 *
 * Return: 1 if replaced, 0 otherwise
 */
int replace_string(char **old, char *new)
{
	free(*old);
	*old = new;
	return (1);
}