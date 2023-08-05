#include "main.h"
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: destnation input
 * @src:  source input
 *
 * Return: @dest
*/

char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	while (dest[n])
		n++;

	for (m = 0; src[m] ; m++)
		dest[n++] = src[m];

	return (dest);
}
