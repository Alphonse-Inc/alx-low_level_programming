#include "main.h"

/**
 * print_sign - This should print the sign of a number
 * @n: This is the number to be checked for
 * Return: 1 for positive number and -1 for negative number or zero
 */

int print_sign(int n)

{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
