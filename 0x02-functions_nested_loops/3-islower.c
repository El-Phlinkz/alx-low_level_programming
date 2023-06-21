#include <stdio.h>
#include "main.h"
/**
 * _islower - check next line
 * checks for lowercase character.
 * @c: An input character
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char ALP;
	int i = 0;

	for (ALP = 'a' ; ALP <= 'z' ; ALP++)
	{
		if (c == ALP)
			i = 1;
	}
	return (i);
}
