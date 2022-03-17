#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: takes parameters to be compaired
 * Return: always returns zero
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
