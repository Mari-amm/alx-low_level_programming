#include "main.h"

/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @t : input char
 * Return: @t
*/
char *string_toupper(char *t)
{
	int p;

	for (p = 0; t[p] != '\0'; p++)
	{
		if (t[p] > 96 && t[p] < 123)
		{
			t[p] -= 32;
		}
	}
	return (t);
}
