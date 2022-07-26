#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatnate two strings tongether
 * @s1: string one
 * @s2: string two
 * Return: pointer to the final string
 */
char *str_concat(char *s1, char *s2)
{
	char *str1, *str2, *ptr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	j = strlen(s2);
	ptr = (char *)malloc((i + j) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	str1 = strdup(s1);
	str2 = strdup(s2);
	strcat(str1, str2);
	ptr = strdup(str1);

	return (ptr);
}
