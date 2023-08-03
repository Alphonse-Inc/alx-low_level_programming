#include "main.h"

/**
 * flip_bits - this counts the no of bits to change from n01 to n02
 * @n1: this is the first no
 * @n2: this is the second no
 * Return: Always success - the no of bits to change
 */

unsigned int flip_bits(unsigned long int n1, unsigned long int n2)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n1 ^ n2;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
