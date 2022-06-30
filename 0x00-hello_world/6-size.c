/*
 * TA program that prints sizes  of various
 * types on the computer it is compiled
 * and run on.
 */
#include <stdio.h>

int main(void)
{
	fprintf(stderr,"Size of a char: %d byte(s)\n", sizeof(char));
	fprintf(stderr,"Size of an int: %d byte(s)\n", sizeof(int));
	fprintf(stderr, "Size of a long int: %d byte(s)\n", sizeof(long));
	fprintf(stderr,"size of a long long int: %d byte(s)\n", sizeof(long long));
	fprintf(stderr,"Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
