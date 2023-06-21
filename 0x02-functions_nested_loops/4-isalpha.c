#include "main.h"
/**
 * _isalpha - Check Holberton
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lo;
	char up;
	int i = 0;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == lo || c == up)
				i = 1;
		}
	}
	return (i);
}
