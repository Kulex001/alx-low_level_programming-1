int _putchar(int c);

/**
 * print_sign - print a given sign
 * @n: par to contract
 *
 * Return: a corresponding val
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
