#include "main.h"

/**
 * _isupper - check next line
 * checks for uppercase character
 * @c: an input character
 * Return: 1 if c is upper and 0 otherwise
 */

int _isupper(int c)
{
	int r = 0;
	char up;

	for (up = 'A'; up <= 'Z'; up++)
	{
		if (c == up)
		{
			r = 1;
			break;
		}
	}

	return (r);
}
