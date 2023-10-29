#include "main.h"

/**
 * more_numbers - Print 10 times the numbers, from 0 to 14, followed by a new line.
 * Return: .
 */


void more_numbers(void)
{
	int i;
	int j;
	/* Print numbers.*/
	for (i = 0; i <= 9; i++)
	{	
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');

			_putchar( j % 10 + '0');
		}
		_putchar('\n');
	}
	

}
