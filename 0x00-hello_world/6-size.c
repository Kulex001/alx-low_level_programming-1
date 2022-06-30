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
	fprintf("Size of a char: %d byte(s)\n", sizeof(char));
	fprintf("Size of an int: %d byte(s)\n", sizeof(int));
	fprintf("Size of a long int: %d byte(s)\n", sizeof(long));
	fprintf("size of a long long int: %d byte(s)\n", sizeof(long long));
	fprintf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
