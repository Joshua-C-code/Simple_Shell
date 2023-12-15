#include "shell.h"
/**
 * freemem - ===
 * @arg: ===
 */
void freemem(char **arg)
{
	int i = 0;

	while (arg[i])
	{
		free(arg[i]);
		i++;
	}
	free(arg);
}
