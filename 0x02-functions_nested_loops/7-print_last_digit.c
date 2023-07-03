#include "main.h"
/**
 * print_last_digit - Check next line
 * prints the last digit of a number
 * @n : an integer
 * Return : the value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = (n % 10) * -1;
	else
		r = (n % 10);

	write((n % 10) + '0');
	return(n % 10);
}
