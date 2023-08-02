#include "main.h"

int prime_factor(int n, int i);

/**
 * factor - number is prime?
 *
 * @n: int numb.
 *
 * @x: int numb.
 *
 * Return: true or false.
 */

int factor(int n, int x)
{
	if (x % n == 0)
	{
		return (0);
	}
	else if (x / 2 > n)
	{
		return (factor(n + 2, x));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime
 *
 * @n: int numb
 *
 * Return: recursion
 *
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)

	{
		return (0);
	}
	else
	{
		return (factor(3, n));
	}
}
