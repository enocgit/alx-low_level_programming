#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers to stdout
 *
 * Description: prints numbers to stdout
 */

void print_numbers(void)
{
	int num = 0;

	while (0 <= 9)
	{
		char numchar = num + '0';

		_putchar(numchar);
		num++;
	}
	_putchar('\n');
}
