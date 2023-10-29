#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal..
 * @n: is the quantity of diagonals
 * Return: .
 */


void print_diagonal(int n)
{
	int i;
	int j;
	/* Print diagonal.*/
	if (n > 0)
	{
		for (i = 0; i < n ; i++)
			for (j = 0; j < i; j++)
			{
				_putchar(92);
			}
		_putchar('\n'); 
	}
}
	_putchar('\n');
}
