#include "main.h"
#include <stdlib.h>
void print_one(int);
void print_two(int);
void print_three(int);

/**
 * print_to_98 - print num upto 98
 * @n: value given
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		print_two(n);
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n < 100)
				print_two(n);
			else
				print_three(n);
		}
		_putchar('\n');
	}
	else
	{
		for (; n <= 98; n++)
		{
			int p = abs(n);

			if (n < 0)
				_putchar('-');
			if (p > 9)
				print_two(p);
			else
				print_one(p);
		}
		_putchar('\n');
	}
}

/**
 * print_one - print one char
 * @n: par passed
 */
void print_one(int n)
{
	_putchar(n + 48);
	_putchar(',');
	_putchar(' ');
}

/**
 * print_two - print two char
 * @n: arg passed
 *
 * Return: break the loop
 */
void print_two(int n)
{
	_putchar((n / 10) + 48);
	_putchar((n % 10) + 48);
	if (n == 98)
		return;
	_putchar(',');
	_putchar(' ');
}

/**
 * print_three - print 3 char
 * @n: arg passed
 */
void print_three(int n)
{
	int p;

	_putchar((n / 100) + 48);

	p = n - ((n / 100) * 100);

	_putchar((p / 10) + 48);
	_putchar((p % 10) + 48);
	_putchar(',');
	_putchar(' ');
}
