#include <stdio.h>

/**
 * _strlen - Return the length of the string
 * @str : The string whose length should be gotten
 * Return : The length of @str
 */

size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
