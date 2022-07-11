#include "main.h"
#include <stdio.h>

/**
 * print_array - print num in an array
 * @a: the array
 * @n: num of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
