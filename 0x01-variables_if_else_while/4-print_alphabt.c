#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * prints lowercase english alphabets
 * except for 'e' and 'q'
 *
 * Return: returns zero after printing
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
		continue;
		else if (ch == 'q')
		continue;
		else
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
