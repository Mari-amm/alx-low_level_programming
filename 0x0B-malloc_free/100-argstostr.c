#include "main.h"
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
char *new_string = NULL;
int B = 0, i = ac, r, summe = 0, tm = 0;

if (ac == 0 || av == NULL)
return (NULL);

while (ac--)
summe += (len(av[ac]) + 1);
new_string = (char *) malloc(summe + 1);

if (new_string != NULL)
{
while (B < i)
{
for (r = 0; av[B][r] != '\0'; r++)
new_string[r + tm] = av[B][r];
new_string[tm + r] = '\n';
tm += (r + 1);
B++;
}
new_string[tm] = '\0';
}
else
{
return (NULL);
}
return (new_string);
}

/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
int len = 0;

if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
