#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrance
 *
 * prints base sixteen numbers
 * in lower case
 *
 * Return: returns 0 upon success
 */
int main(void)
{
	char ch;
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
