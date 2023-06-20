#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int NUM;

	for (NUM = '0'; NUM <= '9'; NUM++)
	{
		putchar(NUM);
		if (NUM != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
