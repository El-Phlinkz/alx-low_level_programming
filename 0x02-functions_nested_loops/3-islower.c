#include "main.h"
/**
 * main - Check main
 *
 * Return: 1 if is lowercase or 0 if not
 */
int _islower(int c)
{
	int c;

	if (c >= "a" && c <= "z")
		return (1);
	else
		return (0);
}
