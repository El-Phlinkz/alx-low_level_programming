#include "main.h"
/**
 * print_diagonal - check next line
 * draws a diagonal line
 * @n: an input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int s;
	int d;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			for (d = 0; d < s; d++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
