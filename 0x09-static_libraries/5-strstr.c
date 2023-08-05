#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: string
 *
 * @needle: string substring
 *
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int e, f, j;

	e = 0;
	j = 0;
	while (haystack[e] != '\0')
	{
		f = 0;
		while (needle[f + j] != '\0' && haystack[e + j] != '\0'
		       && needle[f + j] == haystack[e + j])
		{
			if (haystack[e + j] != needle[f + j])
				break;
			j++;
		}
		if (needle[f + j] == '\0')
			return (&haystack[e]);
		f++;
		e++;
	}

	return (0);
}
