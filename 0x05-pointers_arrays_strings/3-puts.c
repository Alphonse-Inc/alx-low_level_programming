#include "main.h"

/**
 * _puts - Prints a string out
 * @str: The string that should be printed out
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
