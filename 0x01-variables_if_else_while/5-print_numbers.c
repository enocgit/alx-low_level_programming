#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int endint = 10;
	int startint = 0;
	while (startint < endint)
	{
		printf("%d", startint);
		startint++;
	}

	putchar('\n');
	return (0);
}
