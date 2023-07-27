#include "main.h"
/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 * @a: int array
 * @n: number of in array
*/

void reverse_array(int *a, int n)
{
	int b;
	int d;

	for (b = 0; b < (n / 2); b++)
	{
		d = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = d;
	}
}



