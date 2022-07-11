#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n, j;

	n = strlen(str);
	if (n % 2 != 0)
		n -= 1;
	for (j = n / 2; j <= n; j++)
		_putchar(str[j]);
}
