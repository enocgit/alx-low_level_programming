#include "main.h"

/**
 * main - Entry point
 *
 * Always: Return 0 (Success)
 */

int main(void)
{
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

	print_alphabet();

	return (0);
}
