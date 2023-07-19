#include "main.h"
/**
 * _islower - l if the input is a
 * lowercase character. another shows,
 * 0
 * @c: the character in the ASCCI code
 * Return: 1 to the lowercase character  0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

