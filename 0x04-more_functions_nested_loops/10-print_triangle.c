#include "holberton.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
 int a, b, c = size -1;
 
  if (size > 0)
  {
        for (a = 0; a < size; a++)
        {
            for (b = 0; b < size; b++)
            {
             if (b < c)
                        _putchar('a');
                    else    
                        _putchar('#');
            }
            c--;
            _putchar('\n');
        }
    }
    else
        _putchar('\n');
}
