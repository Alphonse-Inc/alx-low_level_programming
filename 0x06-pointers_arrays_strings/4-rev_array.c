#include "main.h"

/**
 * reverse_array - This reverses value of an array of integers
 * @a: The array of numbers to be reversed
 * @n: The total number of values in the array
 */

void reverse_array(int *a, int n)

{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
