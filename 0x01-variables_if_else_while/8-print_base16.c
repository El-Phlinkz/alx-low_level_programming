#include <stdio.h>
#include <stdlib.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char NUM;
	char UPP;
	for (NUM = '0' ; NUM <= '9' ; NUM++)
		putchar(LOW);
	for (UPP = 'a' ; UPP <= 'f' ; UPP++)
		putchar(UPP);
	putchar('\n');
	return (0);
}
