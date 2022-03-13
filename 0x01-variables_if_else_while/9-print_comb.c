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
	
	for (i = 48; i <= 58;)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);

}

