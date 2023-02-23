#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, o;

	for (n = '0'; n < '9'; n++)
	{
		for (n = m + 1; m <= '9'; m++)
		{
for (o = m +1; o <= 9; o++)
{
			if ((m != n) != o)
			{
				putchar(n);
				putchar(m);
putchar(o);

				if (n == '8' && m == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
