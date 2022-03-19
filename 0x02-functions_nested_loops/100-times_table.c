#include "main.h"

/**
 * times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 **/
void print_times_table(unsigned int n)
{
	unsigned int i, j, k;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			if (n > 15)
			{
				break;
			}

			k = i * j;
			_putchar(k);

			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
