#include "main.h"

/**
 * _memset - this funtion fills memory with a constant byte.
 * @b: R constant byte.
 * @n: number of bytes.
 * @s: pointers to memory.
 *
 * Return: R  pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int R;

	R = 0;
	while (n > 0)
	{
		s[R] = b;
		R++;
		n--;
	}

	return (s);
}
