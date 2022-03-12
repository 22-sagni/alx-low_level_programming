#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * takes the randome number generated n
 * tells wether the last digit of the
 * generated number is greater than five,
 * equal to zero, or is less than six and
 * is not equal to zero.
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit);
	/*return: returns zero after the function done printing*/
	return (0);
}
