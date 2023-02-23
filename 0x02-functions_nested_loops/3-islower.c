#include "main.h"
/**
 * _islower - Check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if is lowercase or 0 if not
 */
int _islower(int c)
{
	char letter;
	int lower = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
			lower = 1;
	}

	return (lower);
}
