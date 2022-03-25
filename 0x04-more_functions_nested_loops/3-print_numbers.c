#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: returns zero
 */

void pirnt_numbers(void)
{
	int m;

	m = 48;
	while (m < 58)
	{
		_putchar(m + '0');
		m++;
	}
	_putchar('\n');
}
