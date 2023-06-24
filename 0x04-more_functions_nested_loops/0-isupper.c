#include "main.h"

/**
 * _isupper - This should check if a letter is in uppercase
 * @x: This is the number to be checked
 * Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int x)

{

	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
