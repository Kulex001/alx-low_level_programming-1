#include "main.h"
#include <stdlib.h>
#include <math.h>
double do_sqrt(double, double);

/**
 * _sqrt_recursion - look for a sqrt of natural num
 * @n: num
 * Return: 0 for success -1 otherwise
 */
int _sqrt_recursion(int n)
{
	double j, k;
	int i, m;

	k = 3;
	i = n;
	if (n < 0)
		return (-1);
	j = do_sqrt(n, k);
	m = (int)(j);
	if ((m * m) == i)
		return (m);
	else
		return (-1);
}

/**
 * do_sqrt - check for sqrt of numbers
 * @n: number
 * @p: constant num
 * Return: sqrt of num
 */
double do_sqrt(double n, double p)
{
	double eps, j, k;

	eps = 0.000001;
	j = (p + (n / p)) / 2;
	k = p - j;
	if (k < 0)
		k *= -1;
	if (k > eps)
	{
		p = j;
		return (do_sqrt(n, p));
	}
	return (j);
}
