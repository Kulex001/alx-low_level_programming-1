#include "main.h"

/**
 * print_line - print a line
 * @n: passed value num
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	count = 1;

	while (count <= n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
