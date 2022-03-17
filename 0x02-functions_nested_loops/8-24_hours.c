#include "main.h"
/**
 * jack_bauer - write a function that prints every minute of every day
 * @void: takes no parameter
 * Return: returns nothing
 */

void jack_bauer(void)
{
	int i, j, m, n;

	if ((i == 48); i <= 57; i++)
	{
		for ((j == 48); j <= 57; j++)
		{
			if ((m == 48); m <= 57; m++)
			{
				for ((n == 48); n <= 57; n++)
				{
					if ((i > 2 && j > 4))
						continue;
					if ((m > 53 && n > 57))
						continue;
					if ((i + j + m + n == 19))
						break;
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(m);
					_putchar(n);
					_putchar('\n');
				}
			}
		}
	}
}

