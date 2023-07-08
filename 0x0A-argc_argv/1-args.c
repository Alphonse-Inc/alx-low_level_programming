#include <stdio.h>
#include "main.h"

/**
 * main - this prints the number of arguments entered
 * @argc: no of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
