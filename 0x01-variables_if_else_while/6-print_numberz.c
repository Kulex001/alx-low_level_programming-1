#include <stdio.h>

/**
 * main - Function initialization
 * @void: Rep null argument
 *
 * Return: 0 to rep success
 */
int main(void)
{
	int s = '0';

	for (; s <= '9'; s++)
	{
		putchar(s);
	}
	putchar('\n');

	return (0);
}
