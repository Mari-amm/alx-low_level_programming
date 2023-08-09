#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the product of two integers to the stdout
 * @argc: the number of passed arguments
 * @argv: the array of passed arguments
 *
 * Return: the product if argc == 2, else 1
 */
int main(int argc, char *argv[])
{
	int result, r, k;

	if (argc == 3)
	{
		r = _atoi(argv[1]);
		k = _atoi(argv[2]);
		result = r * k;
		printf("%d\n", result);
		return (0);
	}
	puts("Error");
	return (1);
}

/**
 * _atoi - extracts integer from string
 * @s: the string to be parsed
 *
 * Return: integer if integer is present in s, else 0
 */
int _atoi(char *s)
{
	int FLAG = 0, len, n = 0, d = 0, digit, r;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (r = 0; r < len && !FLAG; r++)
	{
		if (s[r] == '-')
			d++;

		if (s[r] >= 48 && s[r] <= 57)
		{
			digit = s[r] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			FLAG = 1;
			if (s[r + 1] < 48 || s[r + 1] > 57)
				break;
			FLAG = 0;
		}
	}
	if (!FLAG)
		return (0);
	return (n);
}
