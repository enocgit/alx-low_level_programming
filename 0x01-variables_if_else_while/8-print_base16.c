#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	char num = '0';

	for (int i = 0; i < 10; i++)
	{
		putchar(num + i);
	}
	while (letter < 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
