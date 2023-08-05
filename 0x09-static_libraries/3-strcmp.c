#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 * Return: 0 if s1 and s2 are equal
*/

int _strcmp(char *s1, char *s2)
{
	int o;

	for (o = 0; s1[o] != '\0' || s2[o] != '\0'; o++)
	{
		if (s1[o] != s2[o])
			return (s1[o] - s2[o]);
	}
	return (0);
}
