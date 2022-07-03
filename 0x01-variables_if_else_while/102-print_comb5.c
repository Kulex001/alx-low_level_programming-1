#include <stdio.h>

/**
 * main - entry point
 * @void: par indicates null arg
 *
 * Return: 0 to indicate success
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (((i + j) > (k + l)) || (i == k && j == l))
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 57 && k == 57 && l == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
