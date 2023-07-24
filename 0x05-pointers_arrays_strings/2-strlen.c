#include "main.h"
/**
 * _strlen - return the lenght og the string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (len != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
