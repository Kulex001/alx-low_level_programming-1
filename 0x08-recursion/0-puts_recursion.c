#include "main.h"
#include <string.h>
void printChar(char **, int);

/**
 * _puts_recursion - prints char in a recusion
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	char **ptr;
	int n;

	ptr = &s;
	n = 0;
	printChar(ptr, n);
	_putchar('\n');
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
	i = strlen(ptr);
	if (n == i)
		return;
	_putchar(ptr[n]);
	printChar(&ptr, n + 1);
}
