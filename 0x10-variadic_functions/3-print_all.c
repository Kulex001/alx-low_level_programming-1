#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all args
 * @format: arg format type
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *ptr;
	va_list lst;

	va_start(lst, format);
	i = 0, j = 0;
	while (format && format[i])
	{
		if (i && j == 1 && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lst, int));
				j = 1;
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(lst, double));
				j = 1;
				break;
			case 's':
				ptr = va_arg(lst, char *);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s", ptr);
				j = 1;
				break;
		}
		i++;
	}
	va_end(lst);
	printf("\n");
}
