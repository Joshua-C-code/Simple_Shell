#include "shell.h"
/**
 * _isalpha - ===
 * @arg: ===
 * Return: ===
 */
int _isalpha(char *arg)
{
	int i = 0;

	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (2);
		i++;
	}
	return (0);
}

/**
 * _exits - =
 * @cmd: ==
 * @arg: ==
 */
void _exits(char **arg, char *cmd)
{
	int no;

	if (_isalpha(arg[1]) == 2)
	{
		write(2, "./hsh: 1: exit: Illegal number: ",
				strlen("./hsh: 1: exit: Illegal number: "));
		write(2, arg[1], strlen(arg[1]));
		write(2, "\n", 1);
		free(cmd);
		freemem(arg);
		exit(2);
	}
	else
	{
		no = atoi(arg[0]);
		free(cmd);
		freemem(arg);
		exit(no);
	}
}
