#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * @void par signifies null arg
 */
void print_alphabet_x10(void)
{
	int c;

	for (c = 1; c <= 10; c++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
