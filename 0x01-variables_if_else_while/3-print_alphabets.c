#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char LOW;
	char UPP;

	for (LOW = 'a' ; LOW <= 'z' ; LOW++)
		putchar(LOW);
	for (UPP = 'A' ; UPP <= 'Z' ; UPP++)
		putchar(UPP);
		putchar('\n');
	return (0);
}
