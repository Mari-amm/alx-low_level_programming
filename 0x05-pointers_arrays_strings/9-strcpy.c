#include"main.h"

/**
* _strcpy - copies a string from one pointer to another
*	including the terminating null byte (\0)
* @src: source of string input
* @dest: destination
* Return: pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int r;

for (r = 0; src[r] != '\0'; r++)
{
dest[r] = src[r];
}
dest[r] = '\0';

return (dest);
}
