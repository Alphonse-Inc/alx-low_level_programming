#include "main.h"
#include <stdlib.h>

/**
 * create_array - This creates the array size of size and assign value of c
 * @size: the size of the array
 * @c: char to assign
 * Description: create array of size and assign c
 * Return: pointer to array, NULL if no result
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
