#include "main.h"
void one_char(int);
void two_char(int);
void three_char(int);

/**
 * print_times_table - print a table
 *@n: arg passed
 */
void print_times_table(int n)
{
	int k, l, m;

	if (n > 15 || n < 0)
		return;

	if (n == 0)
	{
		_putchar(48);
		_putchar('\n');
		return;
	}
	for (k = 0; k <= n; k++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		if (k < 10)
		{
			_putchar(' ');
			_putchar(48 + k);
		}
		else
		{
			_putchar((k / 10) + 48);
			_putchar((k % 10) + 48);
		}
		_putchar(',');
		_putchar(' ');
		m = k;
		for (l = 0; l <= (n - 2); l++)
		{
			m = m + k;
			if (m < 10)
			{
				one_char(m);
			}
			else if (m < 100)
			{
				two_char(m);
			}
			else
			{
				three_char(m);
			}
			if (l == n - 2)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

/**
 * one_char - print 1 char
 * @m: passed char
 */
void one_char(int m)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(m + 48);
}

/**
 * two_char - print 2 char
 * @m: arg passed
 */
void two_char(int m)
{
	_putchar(' ');
	_putchar((m / 10) + 48);
	_putchar((m % 10) + 48);
}

/**
 * three_char - print 3 char
 * @m: arg passed
 */
void three_char(int m)
{
	int p;

	_putchar((m / 100) + 48);

	p = m - ((m / 100) * 100);

	_putchar(48 + (p / 10));
	_putchar((p % 10) + 48);
}
