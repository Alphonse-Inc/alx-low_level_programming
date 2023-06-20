#include "main.h"

/**
 * _isalpha - To check for any alphabetic character
 * @a: This is the character to be checked
 * Return: 1 for any alhabetic character or 0 for any other thing
 */

int _isalpha(int a)

{

	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	return (0);
}
