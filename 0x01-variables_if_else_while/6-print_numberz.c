#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * prints all single digit base ten
 * numbers starting from zero
 * followed by newline
 *
 * Return: returns zero after printing
 */
int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);

}
