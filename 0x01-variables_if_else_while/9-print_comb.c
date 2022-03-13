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
	for (i = 58; i < 59;)
	{
		putchar(i);
		i++;
	}
	return (0);

}

