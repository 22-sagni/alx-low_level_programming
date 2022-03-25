#include <stdio.h>
/**
 * main - prints numbers 0 to hundred
 * replacing multiples of 3, 5,  and both
 * with string
 *
 * Return: always returns zero
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0) && !(i % 3 == 0))
		{
			printf("Buzz ");
		}
		else if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}

