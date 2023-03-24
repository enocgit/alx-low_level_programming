#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digit
 * @c: member
 *
 * Description: checks whether member c is digit
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	int answer = isdigit(c);

	if (answer > 0)
	{
		return (1);
	}
	else
		return (0);
}
