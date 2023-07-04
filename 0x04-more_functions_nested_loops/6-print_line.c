#include "main.h"
/**
 * print_line - check next line
 * draws a straight line
 * @n: an input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int s;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
			_putchar('_');
	}
	_putchar('\n');
}
