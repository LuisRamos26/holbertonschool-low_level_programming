#include "main.h"

/**
 * _isupper - check if the character is uppercase or lowercase.
 *
 * Return: 1 if is uppercase, 0 if is lowercase.
 */


int _isupper(int c)
{
	int i;
	int result;
	/* verify charactare statement*/
	for (i ='A';i <= 'Z'; i++)
	{
		if (c == i)
			result = 1;
		else
			result = 0;
	}
	return (result);

}
