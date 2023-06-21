#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check next line
 * checks for alphabetic character.
 * @c: An input character
 * Return: 1 if is lowercase or uppercase and 0 if otherwise 
 */
int _isalpha(int c)
{
	char Up;
	char Lo;
	int i = 0;

	for (Up = 'a' ; Up <= 'z' ; Up++)
	{
		for (Lo = 'A' ; Lo <= 'Z' ; Lo++)
		{
			if (c == Up || c == Lo)
				i = 1;
		}
	}
	return (i);
}
