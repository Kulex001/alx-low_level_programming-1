#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_number - print numbers
 * @n: number to print
 */
void print_number(int n)
{
	int i, j, k, m;
	char str[10];

	if (n < 0)
		_putchar('-');
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
		return;
	}
	n = abs(n);

	j = n;
	while (j != 0)
	{
		m++;
		j /= 10;
	}
	for (i = 0; i < m; i++)
	{
		k = n % 10;
		n = n / 10;
		str[m - (i + 1)] = k + '0';
	}
	str[m] = '\0';
	k = strlen(str);
	for (i = 0; i < k; i++)
		_putchar(str[i]);
	m = 0;
}
