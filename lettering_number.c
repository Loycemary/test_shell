#include "shell.h"

/**
 * lettering_number - Prints an unsigned number.
 * @n: unsigned integer to print
 * Return: The amount of numbers printed
 */
int lettering_number(int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

