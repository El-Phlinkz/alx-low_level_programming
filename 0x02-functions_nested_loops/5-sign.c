#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: An input character
 * Return: 1 if the number is positive, 0 when zero and -1 when negative
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_patchar('+');
	}
	else if (n == 0)
	{
		sign = 0;
		_patchar('0');
	}
	else
	{
		sign = -1;
		_patchar('-');
	}
	return (sign);
}
