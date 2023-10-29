#include "main.h"

/**
 * _isdigit - check if the character is a digit.
 * @c: is the input character
 * Return: 1 if is digit, 0 otherwise.
 */


int _isupper(int c)
{
	int i;
	int result = 0;
	/* verify charactare statement*/
	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			result = 1;
	}
	return (result);

}
