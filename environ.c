#include "shell.h"

/**
 * _myenv - prints the working environment
 * @info: structure containing potential arguments.
 * Return: Always 0
 */

int _myenv(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

/**
 * _getenv - gets the value of an environ variable
 * @info: structure containing potential arguments
 * @name: env var name
 * Return: the value
 */

char *_getenv(info_t *info, const char *name)
{
	list_t *node
	char *p;

	= info->env;

	while (node)
	{
		p = starts_with(node->str, name);
		if (p && *p)
			return (p);
		node = node->next;
	}
	return (NULL);
}

/**
 * _mysetenv - Initialize a new environment variable
 * or make changes to an existing one
 * Return: Always 0
 */

int _mysetenv(info_t *info)
{
	if (info->argc != 4)
	{
		_eputs("incorrect number of arguments\n");
		return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}

/**
 * _myunsetenv - Remove and environment variable
 * @info: structure containing potential argument
 * Return: always 0
 */

int _myunsetenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		_eputs("too few arguments.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
		_unsetenv(info, info->argv[i]);
	return (0);
}

/**
 * populate_env_list - populate env linked list
 * @info: Structure conataining potential arguments
 * Return: Always 0
 */

int populate_env_list(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	info->env = node;
	return (0);
}
