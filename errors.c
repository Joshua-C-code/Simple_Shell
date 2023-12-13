#include "shell.h"

/**
 * _eputs - prints an input string
 * @str: the string to be printed
 * Return: Void
 */

void _eputs(char *str)
{
	int i = 0;

	i(!str)
		return (0);
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - writes the character c to stderr
 * @d: The character to print
 * Return: on success 1 and -1 on error
 */

int _eputchar(char d)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (d == BUF_FLUSH || I >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (d != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - writes the character c to given fd
 * @d: The character to print
 * @fd: The filedescriptor to write
 * Return: on succes 1 and -1 on error
 */

int _putfd(char d, inf fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (d != BUF_FLUSH)
		buf[i++] = d;
	return (1);
}

/**
 * _putsfd - prints an input string
 * @str: the string to be printed
 * @fd: the filedescriptor
 * Return: the nubmber of inputed characters
 */

int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
		return (0);
	while (*str)
	{
		i += _putsfd(*str++, fd);
	}
	return (i);
}
