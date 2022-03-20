#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *
 * @n: input parameter
 * Return: returns void
 */

void print_diagonal(int n)
{
	int i, j;

	i = 1;
	while (i < (n +1))
	{
		j = 1;
		while (j < (n < 1))
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
	
