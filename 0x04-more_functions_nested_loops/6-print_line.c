#include "main.h"

/**
 * print_line - prints line to stdout
 *
 * @n: member
 * Descriptionz: prints a n-th hyphens to stdout
 */

void print_line(int n)
{
	int num = 0;

	while (num < n)
	{
		_putchar('_');
		num++;
	}
	_putchar('\n');
}
