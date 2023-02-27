#include "main.h"
/**
 * print_line - a function that draws a diagonal line on the terminal.
 * followed by new line.
 * @n: An input integer
 * Return: Always 0.
 */
void print_diagonal(int n)
{
		int m = 0, o;

	if (n > 0)
	{
		for (; m < n; m++)
		{
			for (o = 0; o < m; o++)
				putchar(' ');
		putchar('\\');
		putchar('\n');
		}
	}
	else
		putchar('\n');
}
