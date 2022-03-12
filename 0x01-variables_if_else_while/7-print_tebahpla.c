#include <stdio.h>
/**
 * main - entry point
 *
 * prints english alphabet in a
 * reverse order
 *
 * Return: returns zero upon success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		puthchar(ch);
	putchar('\n');
	return (0);

}
