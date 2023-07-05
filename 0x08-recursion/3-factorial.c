#include "main.h"
/**
 * factorial - This returns the factorial of a number
 * @n: The number to get factorial of
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
