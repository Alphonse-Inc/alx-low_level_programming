#include "main.h"

/**
 * _abs - This should compute the absolute value of a integer
 * @a: The number to be computed
 * Return: The result of absolute value of number or zero
 */

int _abs(int a)

{

	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;
		return (abs_val);
	}
	return (a);
}
