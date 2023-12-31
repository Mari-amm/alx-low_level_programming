#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: string
 *
 * Return: length of a string
 *
 */

int _strlen_recursion(char *s)

{
	int m;

	m = 0;

	if (*s == '\0')

		return (0);

	m = 1 +  _strlen_recursion(s + 1);

	return (m);

}
