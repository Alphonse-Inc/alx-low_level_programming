#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int v);

/**
 * op_add - This returns the sum of two numbers
 * @a: First number
 * @b: 2nd number
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This returns the result of substrating two numbers
 * @a: First number
 * @b: 2nd number
 * Return: Subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This returns the multiplication of two numbers
 * @a: First number
 * @b: 2nd number
 * Return: Multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This returns the division of two numbers
 * @a: First number
 * @b: 2nd number
 * Return: Division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This returns the remainder of two divided numbers
 * @a: First number
 * @b: 2nd number
 * Return: The remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
