#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success
 * on erro, -1 is return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
