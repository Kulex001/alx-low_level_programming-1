#include "main.h"

/**
 * print_diagonal - print a diagonal value
 * @n: value passed
 */
void print_diagonal(int n)
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
		int space = 1;

		while (space <= count)
		{
			_putchar(' ');
			space++;
		}
		count++;
		_putchar(92);
		_putchar('\n');
	}
}
