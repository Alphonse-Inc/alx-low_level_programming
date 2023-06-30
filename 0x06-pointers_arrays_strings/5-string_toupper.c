#include "main.h"

/**
 * string_toupper - This will change all lowercase to upercase
 * @str: The string to be changes
 * Return: A pointer to the changed string
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
