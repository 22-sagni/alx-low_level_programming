#include "main.h"
/**
 * _isdigit - checkes wether an input is digit or not
 * @c: input parameter to be checked
 *
 * Return: returns 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
