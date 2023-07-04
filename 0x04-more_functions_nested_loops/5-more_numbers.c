#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: Always 0
 */
void more_numbers(void)
{
	int num;
	int j = 0;

	for (; j < 10; j++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');

			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
