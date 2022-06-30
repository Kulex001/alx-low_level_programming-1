#include <stdio.h>

/*
 * main(void) - Entry point.
 *
 * TA program that prints sizes  of various
 * types on the computer it is compiled
 * and run on.
 * return - return 0 if succesful.
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
