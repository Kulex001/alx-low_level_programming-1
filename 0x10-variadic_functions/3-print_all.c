#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all args
 * @format: arg format type
 */
void print_all(const char * const format, ...)
{
	int i;
	char *ptr;
	va_list lst;

	va_start(lst, format);
	while (format && format[i])
	{
		if (i && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lst, int));
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				break;
			case 'f':
				printf("%f", va_arg(lst, double));
				break;
			case 's':
				ptr = va_arg(lst, char *);
				if (ptr == NULL)
					ptr = "nil";
				printf("%s", ptr);
				break;
		}
		i++;
	}
	va_end(lst);
	printf("\n");
}
