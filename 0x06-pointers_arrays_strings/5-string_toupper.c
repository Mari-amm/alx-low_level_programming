#include "main.h"

/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @s : input char
 * Return: @s
*/
char *string_toupper(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] > 96 && s[c] < 123)
		{
			s[c] -= 32;
		}
	}
	return (s);
}
