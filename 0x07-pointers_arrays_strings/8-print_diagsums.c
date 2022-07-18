#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal numbers
 * @a: array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int m = 0, n = 0, i, j, k;

	j = 0;
	k = size - 1;
	for (i = 0; i < size * size; i += size)
	{
		m += *(a + (i + j));
		n += *(a + (i + k));

		j++;
		k--;
	}

	printf("%d, %d\n", m, n);
}
