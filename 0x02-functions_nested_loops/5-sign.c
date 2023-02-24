#include "main.h"

/**
 * print_sign - Check Main
 * @n: An input number
 * Description: This function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
	int m;

	if (n > 0)
	{
		m = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		m = 0;
		_putchar('0');
	}
	else
	{
		m = -1;
		_putchar('-');
	}

	return (m);
}
