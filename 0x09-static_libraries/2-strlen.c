# include "main.h"
/**
 * _strlen - return the lenght og the string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
