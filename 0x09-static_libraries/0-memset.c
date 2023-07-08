#include "main.h"
/**
 * _memset - fill a block of memory with a value
 * @s: start address of the memory to be added to
 * @b: the value to be inputed
 * @n: number of bytes to be changed
 *
 * Return: the new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
