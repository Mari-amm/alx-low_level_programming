#include "main.h"

/**
 * leet - encode a string into 1337
 * @B: string
 * Return: `B`
 */
char *leet(char *B)
{
	int a, b = 0;
	int d[] = {97, 101, 111, 116, 108};
	int e[] = {65, 69, 79, 84, 76};
	int f[] = {52, 51, 48, 55, 49};

	while (B[b] != '\0')
	{

		for (a = 0; a < 5; a++)
		{
			if (B[b] == d[a] || B[b] == e[a])
			{
				B[b] = f[a];
				break;
			}
		}
		b++;
	}
	return (B);
}
