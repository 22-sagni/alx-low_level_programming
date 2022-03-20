#include "main.h"
/**
 * print_line - prints line
 * @n: input parameter
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	int i;

	i = n;
	while (i < n + 1)
	{
		if (n <= 0)
		{
			continue;
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
