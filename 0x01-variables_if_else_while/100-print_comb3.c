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
	int i, m;

	for (i = 48; i <= 57; i++)
	{
		for (m = 48; i <= 57; i++)
			if (i == m)
				continue;
			if (m < i)
				continue;
		putchar(i);
		putchar(m);
			if (i == 56)
				break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}

