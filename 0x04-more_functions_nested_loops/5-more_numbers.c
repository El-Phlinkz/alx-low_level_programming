#include "main.h"
/**
   * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
   * a new line follows.
   * Return: Always 0
 */
void more_numbers(void)
{
	int n, m = 0;

	for (; m < 10; m++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');

			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
