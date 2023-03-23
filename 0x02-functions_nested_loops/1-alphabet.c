#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: prints all characters in alphabet in ascending order
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
