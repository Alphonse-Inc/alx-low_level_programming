#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory for storage
 * @src: memory for copying
 * @n: number of bytes
 * Return: changed bytes with copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
