#include "main.h"
/**
 * _isalpha - Check main.h
 * @c: is an input character
 * Description: function uses to identify lowercase and uppercase characters
 * Return: 1 if is lowercase/uppercar
 */

int _isalpha(int c)
{
	int value;
	
	/* function*/
	if (c > 0)
	{
		value = 1;
		result = _putchar('+');
	}
	else if (c == 0)
	{
		value = 0;
		result = _putchar('0');
	}
	else
	{
		value = -1;
		result = _putchar('-');
	}

	return (value);
}
