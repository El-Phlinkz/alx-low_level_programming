#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int NUM;
	for (NUM = 'z' ; NUM >= 'a' ; NUM--)
		putchar(NUM);
	putchar ('\n');

	return (0);
}

