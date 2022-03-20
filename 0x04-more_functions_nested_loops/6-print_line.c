#include "main.h"
/**
 * print_line - prints line
 * @n: input parameter
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	i = n;
	while (i < n + 1)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
