#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: returns zero
 */

void pirnt_numbers(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		_putchar(m + '0');
	}
	_putchar('\n');
}
