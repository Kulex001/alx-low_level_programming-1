int _putchar(char c);

/**
 * times_table - print a table
 *@void: indicates null arg
 */
void times_table(void)
{
	int k, l, m;

	for (k = 0; k <= 9; k++)
	{
		_putchar('0');
		-putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(48 + k);
		_putchar(',');
		_putchar(' ');
		m = k;
		for (l = 0; l <= 7; l++)
		{
			m = m + k;
			if (m < 10)
			{
				-putchar(' ');
				-putchar(m + 48);
			}
			else
			{
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
			}
			if (m == 81)
				break;
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}
