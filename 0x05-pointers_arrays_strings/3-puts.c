#include "main.h"
/**
 * _puts - print string folloed by new line
 * @str: the string to print
 * Return: void
 */
void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
