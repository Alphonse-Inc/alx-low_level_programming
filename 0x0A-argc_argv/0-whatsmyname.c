#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the prog
 * @argc: number of arguments
 * @argv: the array of arguemnents
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
