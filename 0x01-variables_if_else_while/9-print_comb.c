#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int num = '0';

	int count = 0;

	while (count < 10)
	{
		putchar(num + count);
		if (count != 9)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');

	return (0);
}
