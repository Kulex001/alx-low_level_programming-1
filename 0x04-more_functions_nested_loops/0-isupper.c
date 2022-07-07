#include "main.h"
#include <ctype.h>

/**
 * _isupper - check for uppercase letter
 *@c: passed int value
 *
 * Return: 1 if true otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
