#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int U;
	int I;

	for (U = '0'; U < '9'; U++)
	{
		for (I = U + 1; I <= '9'; I++)
		{
			if (I != U)
			{
				putchar(U);
				putchar(I);

				if (U == '8' && I == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
