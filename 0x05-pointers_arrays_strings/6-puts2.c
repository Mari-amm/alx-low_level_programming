#include "main.h"

/**
 * puts2 - prints ech charachter of the string 
 * @str: the string
 * Return: void
 */

void puts2(char *str)

{
	int k;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (k = 0; k < j; k += 2)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
