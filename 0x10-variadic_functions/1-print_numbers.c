#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - print numbers
 * @separator: num separator
 * @n: args counter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(lst, int);
		printf("%d", num);
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
