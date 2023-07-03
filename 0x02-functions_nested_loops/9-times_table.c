#include "main.h"

/**
 * times_table - check next line
 * prints the 9 times table. starting with 0
 * Return: Always 0
 */
void times_table(void)
{
	int a, b, p;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			p = a * b;

			if ((p / 10) == 0)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
