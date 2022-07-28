#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - join 2 strings together
 * @s1: string 1
 * @s2: string 2
 * @n: size to copy
 * Return: pointer to the final string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str1, *str2;
	unsigned int len2;

	printf("val of s1: %s\nval of s2: %s\n", s1, s2);
	str1 = strdup(s1);
	str2 = strdup(s2);
	len2 = strlen(str2);
	printf("len of s2: %d\n", len2);
	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	if (n >= len2)
	{
		printf("wrong side");
		strcat(str1, str2);
		return (str1);
	}
	strncat(str1, str2, n);
	printf("concat(n) string: %s\n", str1);
	return (str1);
}
