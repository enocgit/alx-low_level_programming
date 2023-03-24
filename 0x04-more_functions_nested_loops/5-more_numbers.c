#include "main.h"

/**
 * more_numbers - prints numbres to stdout
 *
 * Description: prints 0 - 14 10 times
 */

void more_numbers(void)
{
	int outernum = 0;

	while (outernum <= 10)
	{
		int innernum = 0;

		while (innernum <= 14)
		{
			_putchar(innernum);
			innernum++;
		}
		_putchar('\n');

		outernum++;
	}
	_putchar('\n');
}
