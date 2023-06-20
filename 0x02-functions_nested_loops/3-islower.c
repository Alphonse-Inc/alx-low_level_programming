#include "main.h"

/**
 * _islower - Should checksfor lowercase characters
 * Return: 1 for lowercase character or 0 for any other charachter
 */

int _islower(int a)

{
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	return (0);
}
