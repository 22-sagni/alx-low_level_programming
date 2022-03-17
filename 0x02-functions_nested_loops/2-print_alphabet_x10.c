#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: always returns 0
 */
void print_alphabet_x10(void)
{
	int n;
	char alphabet;

	for (n = 1; n <= 10; n++)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
	}
}
