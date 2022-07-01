#include <stdio.h>

/**
 * main -Program entry point
 * @void: par signifies null arg
 *
 * Return: 0 indicate success
 */
int main(void)
{
	int s = '0';

	for (; s <= '9'; s++)
	{
		putchar(s);
		if (s == '9')
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
	}

	return (0);
}
