#include "main.h"
/**
 * jack_bauer - write a function that prints every minute of every day
 * @void: takes no parameter
 * Return: returns nothing
 */

void jack_bauer(void)
{
	int i, j, m, n;

	i = 48;
	while (i <= 57)
	{
		for (j = 48; j <= 57; j++)
		{
			m = 48;
			while (m <= 57)
			{
				for (n = 48; n <= 57; n++)
				{
					if ((i > 2 && j > 4) && (m > 53 && n > 57))
						break;
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(m);
					_putchar(n);
				}
			}
		}
		
		i++;
	}
}

