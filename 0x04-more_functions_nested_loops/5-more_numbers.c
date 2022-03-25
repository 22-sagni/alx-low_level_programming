#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times
 * Return: nothing
 */

void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		j = 48;
		while (j < 58);
		{
			_putchar(j + '0');
			j++;
		}

		for (k = 49; k < 50; k++)
		{
			l = 48;
			while (l < 53)
			{
				_putchar(k + '0');
				_putchar(l + '0');
				l++;
			}
		_putchar('\n');
	}
	_putchar('\n');
}
