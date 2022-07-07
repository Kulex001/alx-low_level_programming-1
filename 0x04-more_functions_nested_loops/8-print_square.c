#include "main.h"

/**
 * print_square - draw a square
 * @size: size of the square
 */
void print_square(int size)
{
	int l, i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	l = size;

	for (; size > 0; size--)
	{
		for (i = 0; i < l; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
