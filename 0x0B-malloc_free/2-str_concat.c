#include "main.h"
#include <string.h>

/**
 * str_concat - concatnate two strings tongether
 * @s1: string one
 * @s2: string two
 * Return: pointer to the final string
 */
char *str_concat(char *s1, char *s2)
{
	char *str1, *str2;

	str1 = strdup(s1);
	str2 = strdup(s2);
	strcat(str1, str2);

	return (str1);
}
