#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints char in a recusion
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	int i, j;

	j = strlen(s);
	for (i = 0; i < j; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
