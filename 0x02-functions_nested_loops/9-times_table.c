#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: returns nothing
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k);
		}
	}
}

