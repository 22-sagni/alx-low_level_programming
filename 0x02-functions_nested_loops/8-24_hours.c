#include "main.h"
/**
 * jack_bauer - write a function that prints every minute of every day
 * @void: takes no parameter
 * Return: returns nothing
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
	for (b = 0; b <= 59; b++)
	{
	_putchar(a / 10 + '0');
	_putchar(a % 10 + '0');
	_putchar(':');
	_putchar(b / 10 + '0');
	_putchar(b % 10 + '0');
	_putchar('\n');
	}
	}
}
