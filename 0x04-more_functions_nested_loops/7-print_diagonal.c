#include "main.h"
/**
 * print_line - a function that draws a diagonal line on the terminal.
 * followed by new line.
 * @n: An input integer
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i = 5, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				putchar(' ');
		putchar('\\');
		putchar('\n');
		}
	}
	else
		putchar('\n');
}
