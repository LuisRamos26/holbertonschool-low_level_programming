#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 without 2 and 4.
 * Return: .
 */


void print_line(int n)
{
	int i;
	/* Print numbers.*/
	for (i = 0; i < n ; i++)
	{
		if (i > 0)
		{
			_putchar("_"); 
		}

		else 
			_putchar('\n'); 
	}
	_putchar('\n'); 

}
