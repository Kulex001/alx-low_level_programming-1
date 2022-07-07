#include "main.h"
void charP(int);

/**
 * more_numbers - print extra numbers
 */
void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int c = 0, cnt = 0;

		while (cnt < 15)
		{
			if (c < 10)
			{
				charP(c + 48);
			}
			else
			{
				charP((c / 10) + 48);
				charP((c % 10) + 48);
			}
			c++;
			cnt++;
		}
		count++;
		_putchar('\n');
	}
}

/**
 * charP - print character
 * @c: char value
 */
void charP(int c)
{
	_putchar(c);
}
