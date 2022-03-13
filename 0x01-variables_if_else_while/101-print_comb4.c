#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrance
 *
 * prints single digit combinaltions
 *
 * Return: returns zero upon success
 */
int main(void)
{
	int i, m, n;

	for (i = 48; i <= 57; i++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (n = 48; n <= 57; n++)
			{
				if (m <= i)
					continue;
				if (n <= m)
					continue;

				putchar(i);
				putchar(m);
				putchar(n);

				if (i == 55)
					break;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}

