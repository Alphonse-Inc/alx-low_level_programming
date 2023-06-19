#include <stdio.h>

/**
 * main - Input
 * Smile in the mirror task
 * Return: 0 (Success)
 */

int main(void)

{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');

	return (0);
}
