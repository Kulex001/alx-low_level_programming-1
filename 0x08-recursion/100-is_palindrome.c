#include "main.h"
#include <string.h>
#include <stdio.h>
int string(char **, int, int);

/**
 * is_palindrome - check whether a string is palindrome
 * @s: the string
 * Return: 1 it true otherwise 0
 */
int is_palindrome(char *s)
{
	char **ptr;
	int len, m = 0, ret;

	ptr = &s;
	len = strlen(s) - 1;
	if (s[0] == s[len])
		ret = string(ptr, m, len);
	else
		ret = 0;
	return (ret);
}

/**
 * string - check whether a string is palindrome
 * @s: string
 * @i: counter for indexi
 * @len: length of the string
 * Return: 1 if true 0 if otherwise
 */
int string(char **s, int i, int len)
{
	char *a;

	 a = *s;
	if (i == len)
	{
		return (1);
	}
	if (a[i] == a[(len - i)])
		return (string(&a, i + 1, len));
	return (0);
}
