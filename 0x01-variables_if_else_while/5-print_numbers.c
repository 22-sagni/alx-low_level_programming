#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * prints all single digit numbers of base ten
 * starting from zero.
 *
 * Return: returns zero after printing
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);

}
