#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated.
*space in memory, which contains a copy of the.
*string given as a parameter
*@str:String to be copied.
*
*Return: NULL in case of error, pointer to allocated
*
*/

char *_strdup(char *str)
{
char *cpy;
int N, L;

if (str == NULL)
return (NULL);

for (N = 0; str[N]; N++)
L++;
cpy = malloc(sizeof(char) * (L + 1));

if (cpy == NULL)
return (NULL);

for (N = 0; str[N]; N++)
{
cpy[N] = str[N];
}

cpy[L] = '\0';

return (cpy);

}
