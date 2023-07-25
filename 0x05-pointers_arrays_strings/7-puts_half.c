#include "main.h"
/**
 * puts_half - prints half of the string 
 * @str: the string to print 
 * Return: void
 */
void puts_half(char *str)
{
	int l = 0;
	int j;

	while (str[l] != '\0';
			{
			l++
			}
			if (l % 2 == 1)
			{
			j = (l - 1) / 2;
			j += 1;
			}
			else
			{
			j = l / 2;
			}

			for (; j < l; j++)
			{
			_putchar(str[j]);
			}
			_putchar('\n');
			}
