#include "main.h"
/**
 * print_square - check next line
 * draws a diagonal line
 * @size: an input integer
 * Return: Always 0
 */
void print_square(int size)
{
	int s;
	int d;

	if (size > 0)
	{
		for (s = 0; s < size; s++)
		{
			for (d = 0; d < size; d++)
				_putchar('#');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
