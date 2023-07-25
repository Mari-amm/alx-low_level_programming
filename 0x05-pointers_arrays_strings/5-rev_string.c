#include "main.h"
/**
 * rev_string - it will reverse the string 
 * @s: the string to be reversed
 * Rerurn: void
 */
void rev_string(char *s)
{
	int lenght  = 0, ind = 0;
	char rv;
	
	while (s[ind++])
		lenght++;
	for (ind = lenght - 1; ind >= lenght / 2; ind--)
	{
		rv = s[ind];
		s[ind] = s[lenght - ind - 1];
		s[lenght - ind - 1] = rv;
	}
}
