#include <stdio.h>
/**
 *main - Input
 *Return: 0 (Success)
 */
int main(void)
{
	int alp = 97;

	while (alp <= 122)
	{
		if (alp == 101 || alp == 111)
		{
			alp++;
			continue;
		}
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
