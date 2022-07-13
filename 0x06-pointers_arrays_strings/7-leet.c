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
	char **point;
	char b;
	int n, m;

	point = &a;
	n = strlen(a);
	for (m = 0; m < n; m++)
	{
		b = a[m];
		(b == 'a' || b == 'A') ? a[m] = 52 :
		(b == 'e' || b == 'E') ? a[m] = 51 :
		(b == 'o' || b == 'O') ? a[m] = 48 :
		(b == 't' || b == 'T') ? a[m] = 55 :
		b == 'l' || b == 'L' ? a[m] = 49 : 0;
	}
	*point = a;

	return (*point);
}
