#include "main.h"
#include <string.h>
int counter(char **, int);

/**
 * _strlen_recursion - count num of char in a string
 * @s: string to count char(s)
 * Return: num of char(s)
 */
int _strlen_recursion(char *s)
{
	int n = 0, m;
	char **ptr;

	ptr = &s;
	m = counter(ptr, n);
	return (m);
}

/**
 * counter - count char in a string
 * @s: pointer to the string
 * @n: index to keep counter
 * Return: num of char on a str
 */
int counter(char **s, int n)
{
	char *ptr;
	int count;

	ptr = *s;
	count = 0;

	if (ptr[n] != '\0')
	{
		count = 1;
		return (count + counter(&ptr, n + 1));
	}
	return (count);
}
