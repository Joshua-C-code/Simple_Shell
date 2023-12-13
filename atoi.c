#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */

int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @f: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */

int is_delim(char f, char *delim)
{
	while (*delim)
		if (*delim++ == f)
			return (1);
	return (0);
}

/**
 *_isalpha - checks for alphabetic character
 *@f: The character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int f)
{
	if ((c >= 'A' && f <= 'Z') || (f >= 'a' && f <= 'z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - converts a string to an integer
 *@d: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *d)
{
	int x, sign = 1, flag = 0, output;
	unsigned int result = 0;

	x = 0;
	while (d[x] != '\0' && flag != 2)
	{
		if (d[x] == '-')
			sign *= -1;

		if (d[x] >= '0' && d[x] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (d[x] - '0');
		}
		else if (flag == 1)
			flag = 2;
		x++;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

