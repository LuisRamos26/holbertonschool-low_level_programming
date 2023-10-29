#include "main.h"

/**
 * print_line -  draws a straight line in the terminal.
 * @n: is the quantity of lines
 * Return: .
 */


void print_line(int n)
{
	int i;
	/* Print line.*/
	for (i = 0; i < n ; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else 
			_putchar('\n');
	}
	_putchar('\n'); 
}
