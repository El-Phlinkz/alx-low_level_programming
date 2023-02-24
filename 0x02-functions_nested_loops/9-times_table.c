#include "main.h"

/**
 * times_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int A, B, C;

	for (A = 0; A <= 9; A++)
	{
		for (B = 0; B <= 9; B++)
		{
			C = A * B;

			if ((C / 10) == 0)
			{
				if (B != 0)
					_putchar(' ');
				_putchar(C + '0');

				if (B == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((C / 10) + '0');
				_putchar((C % 10) + '0');
				if (B == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
