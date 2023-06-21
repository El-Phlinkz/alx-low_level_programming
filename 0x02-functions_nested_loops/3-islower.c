#include <stdio.h>
#include "main.h"
/**
 * _islower - check next line
 * checks for lowercase character.
 * Return 0
 */
int _islower(int c)
{
	char ALP;
	int i = 0;

	for (ALP = 'a' ; ALP <= 'z' ; ALP++)
	{
		if (ALP == c)
			i = 1;
	}
	return(i);
}
