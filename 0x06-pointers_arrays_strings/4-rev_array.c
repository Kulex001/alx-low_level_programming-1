#include "main.h"
/**
 * reverse_array - reverse order of an array
 * @a: array
 * @n: size of a
 */
void reverse_array(int *a, int n)
{
	int **point;
	int c, d, e, f;

	point = &a;
	d = 0;

	for (c = (n - 1); c >= n / 2; c--)
	{
		e = a[c];
		f = a[d];
		a[c] = f;
		a[d] = e;
		d++;
	}

	*point = a;
}
