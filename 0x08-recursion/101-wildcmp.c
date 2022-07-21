#include "main.h"
#include <string.h>
#include <stdio.h>
int cmp(char **, char **, int, int);
char *_str(char *, char, int, int);

/**
 * wildcmp - compare 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if similar 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	char **ptr1, **ptr2, *ptr3, *nPtr;
	int ind1, ind2, len1, len2, res;

	ind1 = 0;
	ind2 = 0;
	ptr1 = &s1;
	ptr2 = &s2;
	nPtr = NULL;
	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr3 = strchr(s2, '*');
	if (len1 == len2 || ptr3 != nPtr)
		res = cmp(ptr1, ptr2, ind1, ind2);
	else
		res = 0;

	return (res);
}

/**
 * cmp - compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * @ind1: index of str1
 * @ind2: index to str2
 * Return: 1 if similar otherwise 0
 */
int cmp(char **s1, char **s2, int ind1, int ind2)
{
	char *str1, *str2, *ptr;
	int i, j;

	str1 = *s1;
	str2 = *s2;
	i = strlen(str1);
	if (ind1 == i)
	{
		if (str2[ind2] != '\0')
			return (0);
		return (1);
	}
	if (str1[ind1] == str2[ind2])
	{
		return (cmp(&str1, &str2, ind1 + 1, ind2 + 1));
	}
	if (str2[ind2] == '*')
	{
		return (cmp(&str1, &str2, ind1, ind2 + 1));
	}
	if (str2[ind2 - 1] == '*')
	{
		ptr = _str(str1, str2[ind2], ind1, i - 1);
		i = strlen(ptr);
		if (i == 0)
		{
			return (0);
		}
		j = strlen(str1);
		return (cmp(&str1, &str2, j - i, ind2));
	}
	else
	{
		return (0);
	}
}


/**
 * _str - look for a char in a string
 * @s: string ptr
 * @c: char to look
 * @n: start point
 * @len: lengh of s
 * Return: pointer to char
 */
char *_str(char *s, char c, int n, int len)
{
	char *ptr, *nptr;
	int i;

	nptr = NULL;
	ptr = strchr(s, c);
	if (ptr != nptr)
	{
		i = strlen(ptr) - 1;
		if ((len - i) < n)
			return (_str(ptr, c, n, len));
	}

	return (ptr);
}
