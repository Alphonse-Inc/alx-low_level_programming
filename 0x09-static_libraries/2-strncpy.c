#include "main.h"

/**
 * _strncpy - This will copy inputted number of bytes from src to dest
 * @dest: This stores the string copy
 * @src: The source of the string
 * @n: The number of mytes to be copied from src
 * Return: A pointer to the result of string dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
