#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * prints all possible combinaltin for
 * two two-digit numbers
 *
 * Returns: returns zero upon completion
 */
int main(void)
{
	int i, j, m;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (m = 49; m <= 57; m++)
			{
				if (m <= j)
					continue;
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(i);
				putchar(m);
				if (j == 56)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
