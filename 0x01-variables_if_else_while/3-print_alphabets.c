#include <stdio.h>
/**
 * main - Input
 * Return: 0 (Success)
 */
int main(void)
{
	int alp = 97;
	int alp2 = 65;

	while	(alp <= 122)
	{
		putchar(alp);
		alp++;
	}
	while	(alp2 <= 90)
	{
		putchar(alp2);
		alp2++;
	}
	putchar('\n');
	return (0);
}
