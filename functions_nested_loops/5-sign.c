#include "main.h"
/**
 * print_sign - Check main.h
 * @n: is an input number
 * Description: function uses to identify sing of the number
 * Return: 1 for positive numbers, 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	int value;
	/* function*/
	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
