#include <stdio.h>

/**
 * main - Input
 * Patience task
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}
	putchar('\n');

	return (0);
}
