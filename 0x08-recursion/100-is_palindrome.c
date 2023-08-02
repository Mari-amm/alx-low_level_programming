#include "main.h"
/**
 * get_range - gets range of string
 *
 * @s: string
 *
 * Return: return range of string
 *
 */

int get_range(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_range(++s));
}
/**
 * mirror - recursive check of palindrome
 *
 * @s: string
 *
 * @r: range of string
 *
 * Return: 1 if palindrome, 0 if not
 *
 */

int mirror(char *s, int r)
{
	if (*s == *(s + r))
	{
		if (r <= 0)
			return (1);
		else
			return (mirror(++s, r - 2));
	}
	else
		return (0);
}

/**
 * is_palindrome - check if r string is r palindrome
 *
 * @s: string
 *
 * Return: 1 if @s palindrome, 0 if not
 *
 */

int is_palindrome(char *s)
{
	int range;

	range = get_range(s) - 1;

	return (mirror(s, --range));
}
