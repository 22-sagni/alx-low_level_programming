#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * prints english alphabets
 * followed by newline
 *
 * Return: returns zero after printing
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
