#include "main.h"
#include "string.h"

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
		if (b == 'a' || b == 'A')
			a[m] = 52;
		else if (b == 'e' || b == 'E')
			a[m] = 51;
		else if (b == 'o' || b == 'O')
			a[m] = 48;
		else if (b == 't' || b == 'T')
			a[m] = 55;
		else if (b == 'l' || b == 'L')
			a[m] = 49;
	}
	*point = a;

	return (*point);
}
