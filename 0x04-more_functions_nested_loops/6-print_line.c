#include "main.h"

/**
 * print_line - prints line to stdout
 *
 * @n: member
 * Descriptionz: prints a n-th hyphens to stdout
 */

void print_line(int n)
{
	for (int num = 0; num < n; num++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
