#include <stdio.h>

/**
 * main - function entry point
 * @void: param indicates null arg
 *
 * Return: 0 to indicate success
 */
int main(void)
{
	int start = '0';
	char strt = 'a';

	for (; start <= '9'; start++)
	{
		putchar(start);
	}

	for (; strt <= 'f'; strt++)
	{
		putchar(strt);
	}
	putchar('\n');

	return (0);
}
