#include "main.h"
#include <string.h>
void printChar(char **, int);

/**
 * _print_rev_recursion - prints char in a recusion
 * @s: pointer to string
 */
void _print_rev_recursion(char *s)
{
	char **ptr;
	int n;

	ptr = &s;
	n = strlen(s) - 1;
	printChar(ptr, n);
}

/**
 * printChar - prints char
 * @s: string to print
 * @n: int index
 */
void printChar(char **s, int n)
{
	int i;
	char *ptr;

	ptr = *s;
	i = 0;
	if (n < i)
		return;
	_putchar(ptr[n]);
	printChar(&ptr, n - 1);
}
