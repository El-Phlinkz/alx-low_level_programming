#include "main.h"

/**
 * _isdigit - check next line
 * checks for a digit
 * @c: an input digit
 * Return: 1 if c is a digit  and 0 otherwise
 */

int _isdigit(int c)
{
	int r = 0;
	char digit;

	for (digit  = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
		{
			r = 1;
			break;
		}
	}

	return (r);
}
