#include "main.h"
/**
 * main - Entry point
 * if the character is a lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char L, U;
	int isletter = 0;

	for (L = 'a'; L <= 'z'; L++)
	{
		for (U = 'A'; U <= 'Z'; U++)
		{
			if (c == L || c == U)
				isletter = 1;
		}
	}
	return (isletter);
}
