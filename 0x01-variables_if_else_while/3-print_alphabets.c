#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char LowerC;
  char UpperC;
	for (LowerC = 'a'; LowerC <= 'z'; LowerC++)
{
		putchar(LowerC);
	for (UpperC = 'a'; UpperC <= 'z'; UpperC++)
		putchar(UpperC);
		putchar('\n');
}
	return (0);
}
