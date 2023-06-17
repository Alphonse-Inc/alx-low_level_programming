#include<stdio.h>
/**
 *main - Input
 *Return: 0 (Success)
 */

int main(void)
{
	int dig = 0;

	while (dig <= 9)
	{
		putchar(dig + '0');
		dig++;
	}
	putchar("\n");

	return (0);
}
