#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j,  n = strlen(s);
	char d;
	char strIng[n];

	j = 0;
	for (i = n - 1; i >= 0; i--)
	{
		d = s[j];
		strIng[i] = d;
		j++;
	}

	for (i = 0; i <= n - 1; i++)
	{
		d = strIng[i];
		s[i] = d;
	}
}
