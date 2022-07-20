#include "main.h"
/**
 * is_prime_number - checks whether the input num is prime num
 * @n: num to check
 * Return: 1 for success 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 1 || n == -1)
		return (0);
	if ((n % 2 == 0) ||
			(n % 3 == 0) ||
			(n % 5 == 0) ||
			(n % 7 == 0))
		return (0);
	return (1);
}
