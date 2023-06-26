#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of some array of integers
 * @a: The array of integers
 * @n: The number of items of the array of integers to be printed
 * Return: void
 */

void print_array(int *a, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
