#include "shell.h"
/**
 * _writechar1 - ========
 * @c: =====
 */
void _writechar1(char c)
{

	write(1, &c, 1);

}


/**
 * printno2 - ====
 * @num: ===
 */
void printno2(long num)
{
	if (num < 0)
	{
		_writechar1('-');
		num = num * -1;
	}

	if (num / 10)
		printno2(num / 10);

	_writechar1(num % 10 + '0');
}
