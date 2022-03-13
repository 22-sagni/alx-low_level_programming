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
	int i;

	for (i = 48; i <= 58; i++)
	{
		putchar(i);

		if (i == 58)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		putchar('\n');
	}
	
	return (0);

}

