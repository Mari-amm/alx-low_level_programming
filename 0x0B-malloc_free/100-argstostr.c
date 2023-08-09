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
		int a = 0, i = ac, i, summeme = 0, tm = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			summeme += (len(av[ac]) + 1);
		new_string = (char *) malloc(summeme + 1);

		if (new_string != NULL)
		{
			while (a < i)
			{
				for (i = 0; av[a][i] != '\0'; i++)
					new_string[i + tm] = av[a][i];
				new_string[tm + i] = '\n';
				tm += (i + 1);
				a++;
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
