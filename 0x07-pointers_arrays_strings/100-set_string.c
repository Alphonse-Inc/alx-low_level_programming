#include "main.h"

/**
 * set_string - This will set the value of a pointer to a char
 * @s: pointer to another pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
