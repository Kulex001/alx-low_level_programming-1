#include "main.h"
#include <string.h>

/**
 * cap_string - capitalize a sentence
 * @a: string passed
 * Return: capitalized string
 */
char *cap_string(char *a)
{
	char *pointer, **point;
	char b, d;
	char c[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i, j, k;

	point = &a;
	i = strlen(a);
	for (j = 0; j < i; j++)
	{
		b = a[j];
		d = a[j + 1];
		pointer = strchr(c, b);
		if (pointer != 0 && d >= 97 && d <= 122)
		{
			k = d - 97;
			a[j + 1] = 65 + k;
		}
	}
	*point = a;

	return (*point);
}
