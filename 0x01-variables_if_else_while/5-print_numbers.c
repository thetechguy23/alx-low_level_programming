#include <stdio.h>

/**
 * main - prints the number since 0 to 9
 *
 * Retutn: ALways (Success)
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
