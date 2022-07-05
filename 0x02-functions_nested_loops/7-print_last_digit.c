#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a num
 * @x: the num passed
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int last, ab;

	last = x % 10;
	ab = abs(last);
	_putchar(ab + 48);

	return (ab);
}
