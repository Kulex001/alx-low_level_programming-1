#include "main.h"
#include <string.h>

/**
 * puts2 - print a string
 * @str: string to print
 */
void puts2(char *str)
{
	int n, i;

	i = strlen(str) - 1;
	for (n = 0; n <= i; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
