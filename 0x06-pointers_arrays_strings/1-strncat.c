#include "main.h"

/**
 * _strncat - This concatenates two strings using an inputted byte
 *
 * @dest: The string to be appened upon
 *
 * @src: The string to be appened to dest
 *
 * @n: The number of bytes
 *
 * Return: A pointer to the result of string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
