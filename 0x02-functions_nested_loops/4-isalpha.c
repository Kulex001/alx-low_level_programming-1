#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabets
 * @c: give letter
 *
 * Return: 1 for true 0 if otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (1);
	else
		return (0);
}
