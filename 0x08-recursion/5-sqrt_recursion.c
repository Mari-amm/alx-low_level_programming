#include "main.h"

/**
 * _sqrt_recursion - main function.
 *
 * @n: int n.
 *
 * Return: int.
 *
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 *
 * @m: int m
 *
 * @n: int n
 *
 * Return: sqrt
 *
 */
int _sqrt(int m, int n)
{
	if (m < 0)
		return (-1);
	if ((n * n) > m)
		return (-1);
	else if (n * n == m)
		return (n);
	return (_sqrt(m, n + 1));
}
