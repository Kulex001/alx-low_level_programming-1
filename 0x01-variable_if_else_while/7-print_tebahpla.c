#include <stdio.h>

/**
 * main - Start fun initialization
 * @void: null param
 *
 * Return: 0 for success
 */
int main(void)
{
	char s = 'z';

	for (; s >= 'a'; s--)
	{
		putchar(s);
	}
	putchar('\n');

	return (0);
}
