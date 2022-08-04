#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all num passed as arguments
 * @n: start point
 * Return: their sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	int sum;
	unsigned int i;

	sum = 0;
	if (n > 0)
	{
		va_start(lst, n);
		for (i = 0; i < n; i++)
			sum += va_arg(lst, int);
		va_end(lst);
	}
	return (sum);
}
