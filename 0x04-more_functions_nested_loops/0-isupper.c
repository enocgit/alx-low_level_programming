#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks for a match
 *
 * description: checks for is uppercase char
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
