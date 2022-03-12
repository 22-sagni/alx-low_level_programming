#include <stdio.h>
/**
 *Main - entry point
 *
 *Return:0 after printing the function
 */
int main(void)
{
	printf("Size of a char: %d", sizeof(char));
	printf("Size of an int: %d", sizeof(int));
	printf("Size of a long int: %d", sizeof(long int));
	printf("Size of a long long int: %d", sizeof(long long int));
	printf("Size of a float: %d", sizeof(float));
	return (0);
}
