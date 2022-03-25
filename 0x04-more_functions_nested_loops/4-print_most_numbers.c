#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9 
 * except for 2 and 4
 *
 * Return: returns zero
 */

void pirnt_numbers(void)
{
	int i;

	i = 0;
	while (i <= '9')
	{
		if ((i = '2') || (i = '4'))
		{
			continue;
		}

		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
