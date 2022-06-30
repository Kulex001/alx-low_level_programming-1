/*
 * TA program that prints sizes  of various
 * types on the computer it is compiled
 * and run on.
 */
#include <stdio.h>

main(void)
{
	char chr = 'a';
	int num = 3;
	long numLong = 344456;
	long long nlLong = 123233545656;
	float floatNum = 3.16;

	printf("Size of a char : %d byte(s)\n", sizeof(chr));
	printf("Size of an int : %d byte(s)\n", sizeof(num));
	printf("Size of a long int : %d byte(s)\n", sizeof(numLong));
	printf("size of a long long int : %d byte(s)\n", sizeof(nlLong));
	printf("Size of a float : %d byte(s)\n", sizeof(floatNum));
	return (0);
}
