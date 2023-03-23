#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet characters 10 times
 *
 * Description: prints alphabet characters 10 times horizontally
 */

void print_alphabet_x10(void)
{
	int outercount = 0;

	while (outercount < 10)
	{
		int letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		/* done with first inner loop*/
		outercount++;
		_putchar('\n');
	}
}
