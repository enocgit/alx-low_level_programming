#include "main.h"

/**
 * print_most_numbers: print numbers to stdout
 *
 * Description: omits 2 and 4 but print numbers up to 9 from 0
 */

void print_most_numbers(void)
{
	int num = 0;
	while (num <= 9)
	{
		if (num != 2 || num != 4)
		{
			_putchar(num);
		}
		num++;
	}
}
