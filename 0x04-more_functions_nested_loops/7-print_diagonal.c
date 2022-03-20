#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *
 * @n: input parameter
 * Return: returns void
 */

void print_diagonal(int n)
{
	int i, j, k;

	k = n;
	i = 1;
	while (i <= k)
	{
		j = 1;
		while (j <= k)
		{
			if (k <= 0)
				continue;

			_putchar(' ');

			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
	
