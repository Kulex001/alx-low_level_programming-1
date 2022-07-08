#include "main.h"
#include <string.h>

void print_number(int n)
{
	int m;
	if (n < 0)
		_putchar('-');
	m = abs(m);
	check(m);
}

void check(int a)
{
	char s[1] ;
	
	while (a > 10)
	{
		int n = a % 10;
		char c = 48 + n;
		strcat(s, &ch, c);
	}

	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
		_putchar(s[i]);
}
