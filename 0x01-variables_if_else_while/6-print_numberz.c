#include <stdio.h>
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

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
