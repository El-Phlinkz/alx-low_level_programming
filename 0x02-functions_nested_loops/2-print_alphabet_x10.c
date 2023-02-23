#include "main.h"
/**
 * print_alphabet_x10 - Check main
 * Description: function uses _putchar function to print
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letters;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (letters= 'a'; letters <= 'z'; letters++)
			_putchar(letters);
		_putchar('\n');
	}
}
