#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * prints lowercase english alphabets
 * followed by uppercase alphabets
 *
 * Return: returns zero after printing
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
