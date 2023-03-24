#include "main.h"

/**
 * print_square - print to stdout
 *
 * @size: member
 * Description: print pound symbol to stdout
 */

void print_square(int size)
{
	int num = 0;

	while (num < size)
	{
		_putchar('#');
		num++;
	}

	_putchar('\n');
}
