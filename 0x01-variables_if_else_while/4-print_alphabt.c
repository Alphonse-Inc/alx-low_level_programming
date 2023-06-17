#include <stdio.h>
/**
 *main - Input
 *Return: 0 (Success)
 */
int main(void)
{
	int alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'e' || alp == 'q')
			alp++;
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
