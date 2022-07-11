#include "main.h"
#include <string.h>

/**
 * print_rev - print char
 * @s: string to print
 */
void print_rev(char *s)
{
	int n, i;

	n = strlen(s) - 1;

	for (i = n; i  >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
