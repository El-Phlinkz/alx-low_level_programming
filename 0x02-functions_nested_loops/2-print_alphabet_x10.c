#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Check next line.
 * prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 success
 */
void print_alphabet_x10(void)
{
	char ALP;
	int i = 0;

	while (i < 10)
	{
		for (ALP = 'a' ; ALP <= 'z' ; ALP++)
			_putchar(ALP);
		_putchar('\n');
		i++;
	}
}

