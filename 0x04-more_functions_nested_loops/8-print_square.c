#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
