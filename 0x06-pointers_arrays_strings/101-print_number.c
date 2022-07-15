#include "main.h"
#include <string.h>
#include <stdlib.h>
void printNum(int);

/**
 * print_number - print numbers
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	n = abs(n);
	printNum(n);
}

/**
 * printNum - print numbers
 * @n: number to print
 */
void printNum(int n)
{
	int m;

	if (n < 10)
	{
		_putchar(48 + n);
		return;
	}
	else if (n < 100)
	{
		_putchar((n / 10) + 48);
		m = n % 10;
		printNum(m);
	}
	else if (n < 1000)
	{
		_putchar((n / 100) + 48);
		m = n % 100;
		if (m < 10)
			_putchar(48);
		printNum(m);
	}
	else if (n < 10000)
	{
		_putchar((n / 1000) + 48);
		m = n % 1000;
		if (m < 100)
			_putchar(48);
		printNum(m);
	}
	else if (n < 100000)
	{
		_putchar((n / 10000) + 48);
		m = n % 10000;
		if (m < 1000)
			_putchar(48);
		printNum(n % 10000);
	}
	else if (n < 1000000)
	{
		_putchar((n / 100000) + 48);
		m = n % 100000;
		if (m < 10000)
			_putchar(48);
		printNum(m);
	}
	else if (n < 10000000)
	{
		_putchar((n / 1000000) + 48);
		m = n % 1000000;
		if (m < 100000)
			_putchar(48);
		printNum(m);
	}
	else if (n < 100000000)
	{
		_putchar((n / 10000000) + 48);
		m = n % 10000000;
		if (m < 1000000)
			_putchar(48);
		printNum(m);
	}
	else if (n < 1000000000)
	{
		_putchar((n / 100000000) + 48);
		m = n % 100000000;
		if (m < 10000000)
			_putchar(48);
		printNum(m);
	}
	else
	{
		_putchar((n / 1000000000) + 48);
		m = n % 1000000000;
		if (m < 100000000)
			_putchar(48);
		printNum(m);
	}
}
