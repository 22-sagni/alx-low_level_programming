#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *
 * @n: input parameter
 * Return: returns void
 */

void print_diagonal(int n)
{
	int i, j, n;

	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= n)
		{
			if (n <= 0)
				break;
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
	
