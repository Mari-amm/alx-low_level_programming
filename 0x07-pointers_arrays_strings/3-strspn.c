#include "main.h"

/**
 * _strspn - function  calculat  length (in bytes) of initial
 * segment of s which consists entirely of bytes in accept.
 * @s: string to search in.
 * @accept: bytes in which to search for.
 *
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{

	int R;
	int w;
	int z;

	R = 0;
	z = 0;

	while (s[R] != '\0')

	{
		w = 0;
		while (accept[w] != '\0')
		{
			if (s[R] == accept[w])


			{
				z++;
				break;
			}

			w++;
		}

		if (accept[w] == '\0')
			break;
		a++;
	}


	return (z);
}
