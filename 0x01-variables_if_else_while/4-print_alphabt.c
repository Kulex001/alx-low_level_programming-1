
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
	int q = 'q';
	int e = 'e';

	for (; s <= 'z'; s++)
	{
		if (s == q || s == e)
			continue;
		putchar(s);
	}
	putchar('\n');
	return (0);
}
