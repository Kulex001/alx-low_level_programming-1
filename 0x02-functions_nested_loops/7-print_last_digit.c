#include "main.h"

/**
 * print_last_digit - prints the last digit of a num
 * @x: the num passed
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int last;

	last = x % 10;
	if (last >= 0)
	{
		_putchar(48 + last);
	}
	else
	{
		_putchar(45);
		_putchar(48 + abs(last));
	}

	return (last);
}
