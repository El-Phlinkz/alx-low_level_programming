#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check next line
 * checks for alphabetic character.
 * @c: An input character
 * Return: 1 if is lowercase or uppercase and  0 if is otherwise
 */
int _isalpha(int c)
{
	char ALP;
	char AL;
	int i = 0;

	for (ALP = 'a' ; ALP <= 'z' ; ALP++)
	{
		for (AL = 'A' ; AL <= 'Z' ; AL++)
		{
			if (c == ALP || c == AL)
				i = 1;
		}
	}
	return (i);
}
