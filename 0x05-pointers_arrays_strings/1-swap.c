#include "main.h"

/**
 * swap_int - swap value of two pointers
 * @a: VALUE 1
 * @b: VALUE 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
