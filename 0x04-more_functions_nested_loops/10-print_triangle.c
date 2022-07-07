#include "main.h"
#include "stdio.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k, l;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 1;

	while (i <= size)
	{
		j = size - i;

		for (k = 0; k < j; k++)
			_putchar(' ');
		for (l = 1; l <= i; l++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
