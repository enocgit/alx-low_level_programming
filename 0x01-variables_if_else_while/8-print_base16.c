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

	int count = 0;

	while (count < 10)
	{
		putchar(num + count);
		count++;
	}
	while (letter < 'g')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
