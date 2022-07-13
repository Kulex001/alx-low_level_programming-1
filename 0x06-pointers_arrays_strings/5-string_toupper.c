#include "main.h"
#include <string.h>

/**
 * string_toupper - converts a string to uppercase
 * @a: string to convert
 *
 * Return: converted string
 */
char *string_toupper(char *a)
{
	char **point;
	char b;
	int c, d, e;

	point = &a;
	e = strlen(a);
	for (c = 0; c < e; c++)
	{
		b = a[c];
		if (b >= 97 && b <= 122)
		{
			d = b - 97;
			a[c] = 65 + d;
		}
	}
	*point = a;

	return (*point);
}
