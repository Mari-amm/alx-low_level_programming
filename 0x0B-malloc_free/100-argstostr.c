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
		int B = 0, i = ac, j, summeme = 0, tm = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			summeme += (lenght(av[ac]) + 1);
		new_string = (char *) malloc(summeme + 1);

		if (new_string != NULL)
		{
			while (B < i)
			{
				for (j = 0; av[B][j] != '\0'; j++)
					new_string[j + tm] = av[B][j];
				new_string[tm + j] = '\n';
				tm += (j + 1);
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
*lenght - returns length of str
*@str: string counted
*Return: returns the length
*/
int lenght(char *str)
{
		int lenght = 0;

		if (str != NULL)
		{
			while (str[lenght])
				lenght++;
		}
	return (lenght);
}
