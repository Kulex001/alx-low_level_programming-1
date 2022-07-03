#include <stdio.h>

/**
 * main - method entry
 * @void: par indicates null arg
 *
 * Return: 0 indicating succes
 */
int main(void)
{
	int i,  j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (j < i)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
