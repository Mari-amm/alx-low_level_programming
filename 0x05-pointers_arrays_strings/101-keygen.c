#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this main generate random pasword for 101 crackme
 * Return: zero
 */
int main(void)
{
	int sum;
	char y;

	srand(time(NULL));
	while (sum <= 2645)
	{
		y = rand() % 128;
		sum += y;
		putchar(y);
	}
	putchar(2772 - sum);
	return (0);
}
