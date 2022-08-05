#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: string separator
 * @n: arg counter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list lst;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(lst, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
