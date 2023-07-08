#include "main.h"

/**
 * _strcmp - Compares the pointers to the strings
 * @s1: Pointer to be compred
 * @s2: Second pointer to be compared
 * Return: If str1 < str2, the negative difference of the 1st unmatched values.
 * If str1 == str2, 0
 * If str1 > str2, then the positive diff of the first unmatched values
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
