#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * followed by new line.
 * @n: An input integer
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int m = 0;
	int o = 0;

	if (n > 0)
	{
		for (; m < n; m++)
		{
			for (o = 0; o < m; o++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
