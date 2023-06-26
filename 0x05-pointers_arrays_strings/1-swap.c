#include <stdio.h>

/**
 * swap_int - This swaps the values of two integers.
 * @a : This is the first number to be swapped
 * @b : This is the second number to be swapped
 *
 * Return : 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
