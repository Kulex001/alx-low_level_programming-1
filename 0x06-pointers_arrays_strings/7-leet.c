#include "main.h"
#include "string.h"

/**
 * leet - replace a set of char
 * @a: characters passed
 *
 * Return: pointer to the modified characters
 */
char *leet(char *a)
{
	char **point, *sPointer;
	char b;
	char list1[] = "aAeEoOtTlL";
	char list2[] = "4433007711";
	int n, m, o, p, q, r;

	point = &a;
	n = strlen(a);
	o = strlen(list1);
	for (m = 0; m < n; m++)
	{
		b = a[m];
		for (p = 0; p < o; p++)
		{
			sPointer = strchr(list1, b);
			if (sPointer != 0)
			{
				q = strlen(sPointer);
				r = o - q;
				a[m] = list2[r];
				break;
			}
		}
	}
	*point = a;

	return (*point);
}
