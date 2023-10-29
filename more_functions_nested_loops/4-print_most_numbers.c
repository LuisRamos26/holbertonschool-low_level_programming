#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9 without 2 and 4.
 * Return: .
 */


void print_most_numbers(void)
{
	int i;
	/* Print numbers.*/
	for (i = 48; i <= 57; i++)
	{
		if (i == 50)
		{
		}
		else if (i != 52)
			_putchar(i);
	}
	_putchar('\n');

}
