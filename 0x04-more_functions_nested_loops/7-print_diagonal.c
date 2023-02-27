#include "main.h"
/**
 * print_line - a function that draws a diagonal line on the terminal.
 * followed by new line.
 * @n: An input integer
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int m = 0;

	if (n > 0)
	{
		for (; m < n; m++)
			_putchar('\');
	}
	_putchar('\n');
}
