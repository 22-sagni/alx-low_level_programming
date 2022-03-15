#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: returns zero upon completion
 */
int main(void)
{
	int i, j, m, n;
	
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (m = 48; m <= 57; m++)
			{
				for (n = 48; n <= 57; n++)
				{
					if (n <= i)
						continue;
					if (m < i)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(n);
					if (i == 57 && j == 56)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
	
}
