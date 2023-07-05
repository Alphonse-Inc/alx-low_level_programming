#include "main.h"
/**
 * _strlen_recursion - This returns length of a string
 * @s: The string to be checked
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
