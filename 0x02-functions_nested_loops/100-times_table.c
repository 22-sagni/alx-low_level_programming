#include "main.h"

/**
 * times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 **/
void print_times_table(int n)
{
	int i, j;

	if (n > 15)
		break;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			Printf("%d ", i * j);

			if (j < n)
			{
				printf(", ");
			}
		}
}
