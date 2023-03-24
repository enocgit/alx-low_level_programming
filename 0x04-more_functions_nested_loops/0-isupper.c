#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks for a match
 * @c: member
 *
 * Description: Checks for is uppercase char
 * Return: 1 or 0
 */

int _isupper(int c)
{
	int answer = isupper(c);

	if (answer > 0)
	{
		return (1);
	}
	else
		return (0);
}
