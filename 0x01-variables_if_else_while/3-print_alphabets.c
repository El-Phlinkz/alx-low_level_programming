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
	char LowerC;
	char UpperC;
	
	for (LowerC = 'a'; LowerC <= 'z'; LowerC++)
		putchar(LowerC);
	for (UpperC = 'A'; UpperC <= 'Z'; UpperC++)
		putchar(UpperC);
	putchar('\n');
	
	return (0);
}
