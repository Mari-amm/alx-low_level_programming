#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 *
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *
 * or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{
	int e, f;
	char *j;

	e = 0;
	while (s[e] != '\0')
	{
		f = 0;
		while (accept[f] != '\0')
		{
			if (accept[f] == s[e])
			{
				j = &s[e];
				return (j);
			}
			f++;
		}
		e++;
	}

	return (0);
}
