#include "main.h"

/**
 * _isdigit - check whether given char is digit
 * @c: int value passed
 *
 * Return: 1 if true otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
