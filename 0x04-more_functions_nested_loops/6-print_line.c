#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by new line.
 * Return: Always 0.
 */
void print_line(int n)
{
    	if (n <= 0)
	    putchar('\n');

        else  
            int i;
        
                for (i = 1; i <= n; i++);
                 putchar('_');
  
            putchar('\n');
}
