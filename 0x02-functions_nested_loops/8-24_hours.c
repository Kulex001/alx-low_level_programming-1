#include "main.h"

/**
 * jack_bauer - print time 
 * @void: par inicate null arg
 */
void jack_bauer(void)
{
	int h, i, j, k, l;

	for (h = 0; h <= 23; h++) 
	{
		if (h < 10)
		{
			i = 0;
			j = h;
		}
		else
		{
			i = h / 10;
			j = h % 10;
		}
		for (k = 0; k <=5; k++)
		{
			for (l = 0; l <= 9; l++)
			{
				_putchar(48 + i);
				_putchar(48 + j);
				_putchar(':');
				_putchar(48 + k);
				_putchar(48 + l);
				_putchar('\n');
				}
			}
		}
}
