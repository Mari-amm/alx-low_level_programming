#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
char *concat_str;
int N, CN = 0,  lenghtght = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (N = 0; s1[N] || s2[N]; N++)
lenghtght++;

concat_str = malloc(sizeof(char) * lenghtght);

if (concat_str == NULL)
return (NULL);

for (N = 0; s1[N]; N++)
concat_str[CN++] = s1[N];

for (N = 0; s2[N]; N++)
concat_str[CN++] = s2[N];

return (concat_str);
}
