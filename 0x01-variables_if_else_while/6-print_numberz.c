#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int endint = 10;

	int startint = 0;

	while (startint < endint)
	{
		putchar((char) (startint + '0'));
		startint++;
	}

	putchar('\n');

	return (0);
}
