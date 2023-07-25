#include "main.h"
/**
 * _atoi - convert a string to int
 * @s: the pointer to convert
 * Return: A int
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int si = 1;

	do {
		if (*s == '-')
			si *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * si);
}
