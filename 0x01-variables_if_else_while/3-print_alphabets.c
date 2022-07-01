#include <stdio.h>

/**
 * main - Function initialization
 * @void: Rep null argument
 *
 * Return: 0 to rep success
 */
int main(void)
{
	int s = 'a';
	int y = 'A';

	for (; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
