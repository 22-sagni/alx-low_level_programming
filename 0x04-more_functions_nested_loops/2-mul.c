#include "main.h"
/**
 * mul - multiplies two digit
 * @a: parameter to be multipiled
 * @b: parameter to be multiplied
 *
 * Return: returns result
 */

int mul(int a, int b)
{
	int mult;

	if ((a >= '0' && a <= '9') && (b >= '0' && b <= '9'))
	{
		mult = a * b;
		return (mult);
	}
	else
	{
		_putchar('i');
		_putchar('n');
		_putchar('v');
		_putchar('a');
		_putchar('l');
		_putchar('i');
		_putchar('d');
		_putchar('\n');
	}
}
