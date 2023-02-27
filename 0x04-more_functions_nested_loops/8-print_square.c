#include "main.h"
/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_square(int size)
{
	int m = 0;
	int o = 0;

	if (size > 0)
	{
		for (; m < size; m++)
		{
			for (o = 0; o < size; o++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
