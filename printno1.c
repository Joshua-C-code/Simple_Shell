#include "shell.h"
/**
 * _writechar - =======
 * @c: =====
 */
void _writechar(char c)
{

	write(2, &c, 1);

}


/**
 * printno1 - ====
 * @num: ===
 */
void printno1(long num)
{
	if (num < 0)
	{
		_writechar('-');
		num = num * -1;
	}

	if (num / 10)
		printno1(num / 10);

	_writechar(num % 10 + '0');
}
