#include "main.h"
/**
 *  print_sign - check next line.
 *  prints the sign of a number.
 *  @n: An input number
 *  Return: 1 if the number is positive, o if the number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign  = 0;
		_putchar('0');
	}
	else
	{
		sign = -1;
		_putchar('-');
	}

	return (sign);
}
