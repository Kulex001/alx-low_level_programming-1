#include <stdio.h>

/**
 * main - method entry
 * @void: par indicates null arg
 *
 * Return: 0 indicating succes
 */
int main(void)
{
	int i,  j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i == j ||  j == k|| j < i ||k < j)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 56 && j == 57 && k == 58)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
